/*
 * test.c
 *
 * Userspace ebpf filter test
 *
 * Copyright (C) 2012 Suchakra Sharma <suchakrapani.sharma@polymtl.ca>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; only
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/*
#include <linux/module.h>
#include <linux/netdevice.h>
#include <linux/skbuff.h>
#include <linux/uaccess.h>
#include <linux/bpf.h>
#include <linux/filter.h>
#include <trace/bpf_trace.h>
#include <asm/syscall.h>
#include <linux/interrupt.h>
#include <linux/time.h>
#include <uapi/linux/time.h>
//#include <linux/kallsyms.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/string.h>
#include <linux/vmalloc.h>
#include <linux/if_ether.h>
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <include/bpf.h>
#include <include/filter.h>
#include <include/bpf_trace.h>


/* Global definitions */
struct bpf_prog *prog;

struct filt_args {
    char *dev;
    int prot;
    int len;
};

/* The actual eBPF prog instructions */
#if 0
static struct bpf_insn insn_prog[] = { 
    BPF_LDX_MEM(BPF_DW, BPF_REG_2, BPF_REG_1, 0), /* r2 = &bctx (which is therefore &arg1, and thus, &dev->name) */
    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_2, 0), /* r3 = *(dev->name) */
//    BPF_MOV64_IMM(BPF_REG_4, 0), /* mov 8 to R4 */
    BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_dummy),
    BPF_MOV64_IMM(BPF_REG_4, 28524), /* mov 8 to R4 */
    BPF_JMP_REG(BPF_JEQ, BPF_REG_4, BPF_REG_3, 3), /* compare 8 and arg3 */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
//    BPF_LDX_MEM(BPF_DW, BPF_REG_4, BPF_REG_1, 8), /* r4 = (u64) 28524, which is "lo" */
//    BPF_JMP_REG(BPF_JEQ, BPF_REG_3, BPF_REG_4, 3), /* compare arg1 and arg2 */
//    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
//    BPF_EXIT_INSN(),
    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 16), /* r3 = *(skb->protocol) */
    BPF_MOV64_IMM(BPF_REG_4, 8), /* mov 8 to R4 */
    BPF_JMP_REG(BPF_JEQ, BPF_REG_4, BPF_REG_3, 3), /* compare 8 and arg3 */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 24), /* r3 = *(skb->len) */
    BPF_MOV64_IMM(BPF_REG_4, 100), /* mov 100 to R4 */
    BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_4, 3), /* jump if r3 > 100 */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
    BPF_LD_IMM64(BPF_REG_0, 1), /* TRUE */
    BPF_EXIT_INSN(),
};
#endif

static struct bpf_insn insn_prog[] = { 
    BPF_LDX_MEM(BPF_DW, BPF_REG_2, BPF_REG_1, 0), /* r2 = &bctx (which is therefore &arg1, and thus, &dev->name) */
    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_2, 0), /* r3 = *(dev->name) */
//    BPF_MOV64_IMM(BPF_REG_4, 0), /* mov 8 to R4 */
//    BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_dummy),
//    BPF_MOV64_IMM(BPF_REG_4, 28524), /* mov 8 to R4 */
//    BPF_JMP_REG(BPF_JEQ, BPF_REG_4, BPF_REG_3, 3), /* compare 8 and arg3 */
//    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
//    BPF_EXIT_INSN(),
    BPF_LDX_MEM(BPF_DW, BPF_REG_4, BPF_REG_1, 8), /* pointer to arg2 */
    BPF_MOV64_REG(BPF_REG_5, BPF_REG_1), /* save R1 that is bctx pointer for later*/
    BPF_MOV64_REG(BPF_REG_1, BPF_REG_2), /* mov pointer of arg1 to r1 */
    BPF_MOV64_REG(BPF_REG_2, BPF_REG_4), /* mov pointer to arg2 to r2*/
    //BPF_MOV64_IMM(BPF_REG_3, 3), /* mov 3 to R4 */
    BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_strcmp),
    BPF_LD_IMM64(BPF_REG_6, 0), /*load 0 in r6*/
    BPF_JMP_REG(BPF_JEQ, BPF_REG_0, BPF_REG_6, 3), /* check if return value of memcmp() is 0 (equal) */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
    BPF_MOV64_REG(BPF_REG_1, BPF_REG_5),

    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 16), /* r3 = *(skb->protocol) */
    BPF_MOV64_IMM(BPF_REG_4, 8), /* mov 8 to R4 */
    BPF_JMP_REG(BPF_JEQ, BPF_REG_4, BPF_REG_3, 3), /* compare 8 and arg3 */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
    BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 24), /* r3 = *(skb->len) */
    BPF_MOV64_IMM(BPF_REG_4, 100), /* mov 100 to R4 */
    BPF_JMP_REG(BPF_JGT, BPF_REG_3, BPF_REG_4, 3), /* jump if r3 > 100 */
    BPF_LD_IMM64(BPF_REG_0, 0), /* FALSE */
    BPF_EXIT_INSN(),
    BPF_LD_IMM64(BPF_REG_0, 1), /* TRUE */
    BPF_EXIT_INSN(),
};

static void  *u64_to_ptr(__u64 val){
    return (void *) (unsigned long) val;
}

static __u64 ptr_to_u64(void *ptr){
    return (__u64) (unsigned long) ptr;
}

#if 0
void bpf_map_free_deferred(struct work_struct *work)
{
    struct bpf_map *map = container_of(work, struct bpf_map, work);

    /* implementation dependent freeing */
    map->ops->map_free(map);
}

void bpf_map_put(struct bpf_map *map)
{
    if (atomic_dec_and_test(&map->refcnt)) {
        INIT_WORK(&map->work, bpf_map_free_deferred);
        schedule_work(&map->work);
    }
}
static void free_used_maps(struct bpf_prog_aux *aux)
{
    int i;

    for (i = 0; i < aux->used_map_cnt; i++)
        bpf_map_put(aux->used_maps[i]);

    free(aux->used_maps);
}
#endif

unsigned int run_bpf_filter(struct bpf_prog *prog1, struct bpf_context *ctx){
//    rcu_read_lock();
      __u64 ret = BPF_PROG_RUN(prog1, (void*) ctx);
//    rcu_read_unlock();
    return ret;
}

/* Inititlize and prepare the eBPF prog */
unsigned int init_ebpf_prog(void)
{
    int ret = 0;
    char bpf_log_buf[1024];
    unsigned int insn_count = sizeof(insn_prog) / sizeof(struct bpf_insn);

    union bpf_attr attr = {
        .prog_type = BPF_PROG_TYPE_UNSPEC,
        .insns = ptr_to_u64((void*) insn_prog),
        .insn_cnt = insn_count,
        .license = ptr_to_u64((void *) "GPL"),
        .log_buf = ptr_to_u64(bpf_log_buf),
        .log_size = 1024,
        .log_level = 1,
    };

    prog = bpf_prog_alloc(bpf_prog_size(attr.insn_cnt));
    if (!prog)
        return -ENOMEM;
    prog->jited = 0;
    prog->orig_prog = NULL;
    prog->len = attr.insn_cnt;
#if 0
    printf("bpf_prog_size(attr.insn_cnt): %lu\n", bpf_prog_size(attr.insn_cnt));
    printf("Prog len : %d, insns: %p, insnsi: %p\n",prog->len, attr.insns, prog->insnsi);
    printf("sizeof(struct bpf_insn) %d\n", sizeof(struct bpf_insn));
#endif
    if (memcpy(prog->insnsi, u64_to_ptr(attr.insns), prog->len * sizeof(struct bpf_insn)) != 0)
        atomic_set(&prog->aux->refcnt, 1);
    prog->aux->is_gpl_compatible = 1;

    //TODO eBPF Verifier - find a way to get it working
    //    char *sym_name = "bpf_check";
    //    unsigned long sym_addr = kallsyms_lookup_name(sym_name);
    //    int (*bpf_check)(struct bpf_prog*, union bpf_attr*) = (int (*)(struct bpf_prog*, union bpf_attr*) ) sym_addr;
    //    ret = bpf_check(prog, &attr);

#if 1
    // Time to see if some BPF_CALL is being done in the code
    // Should be done after verifier. It replaces the calls with
    // actual functions to call

    fixup_bpf_calls(prog);
#endif

    // ready for JIT
    bpf_prog_select_runtime(prog);
    printf("prog jited? : %d\n", prog->jited);

    /* set context values */
    return 0;
}

unsigned int run_filt(struct filt_args *fargs)
{

    struct bpf_context bctx = {};
    bctx.arg1 = (__u64) fargs->dev;
    bctx.arg2 = (__u64) "em1";		// value for "lo"
    bctx.arg3 = (__u64) fargs->prot;
    bctx.arg4 = (__u64) fargs->len;

    unsigned int ret = 0;
    ret = run_bpf_filter(prog, &bctx);
    if (ret == 1){
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    return ret;
}


unsigned int cleanup(void)
{

    //free_used_maps(prog->aux);
    //printf("Freed maps\n");
    bpf_prog_free(prog);
    printf("Freed bpf prog\n");

    return 0;
}

int main(int argv, char **argc)
{

    //struct filt_args *args;
    struct filt_args *args = (struct filt_args *) malloc (sizeof(struct filt_args));
    //memset(args, 0, sizeof(struct filt_args));
    args->dev = "em1";
    args->prot = 8;
    args->len = 110;
    //printf("[filter arguments] value of dev %lu\n", args->dev);

    /* Prepare eBPF prog*/
    int ret = init_ebpf_prog();
    ret = run_filt(args);
    ret = cleanup();
    //free(args);

    return 0;
}

