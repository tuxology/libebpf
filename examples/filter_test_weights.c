/*
 * filter_test.c
 *
 * Userspace ebpf filter test with generated filter
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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <include/bpf.h>
#include <include/filter.h>
#include <include/bpf_trace.h>

#include <fcntl.h>
#include <gelf.h>


/* Global definitions */
struct bpf_prog *prog;

struct filt_args {
    char *dev;
    int prot;
    int len;
};

struct bpf_insn *insn_prog;
int prog_size = 0;

static void  *u64_to_ptr(__u64 val){
    return (void *) (unsigned long) val;
}

static __u64 ptr_to_u64(void *ptr){
    return (__u64) (unsigned long) ptr;
}

unsigned int run_bpf_filter(struct bpf_prog *prog1, struct bpf_context *ctx){
    __u64 ret = BPF_PROG_RUN(prog1, (void*) ctx);
    return ret;
}

static int get_sec(Elf *elf, int i, GElf_Ehdr *ehdr, char **shname,
        GElf_Shdr *shdr, Elf_Data **data)
{
    Elf_Scn *scn;

    scn = elf_getscn(elf, i);
    if (!scn)
        return 1;

    if (gelf_getshdr(scn, shdr) != shdr)
        return 2;

    *shname = elf_strptr(elf, ehdr->e_shstrndx, shdr->sh_name);
    if (!*shname || !shdr->sh_size)
        return 3;

    *data = elf_getdata(scn, 0);
    if (!*data || elf_getdata(scn, *data) != NULL)
        return 4;

    return 0;
}

int load_bpf_file(char *path)
{
    int fd, i;
    Elf *elf;
    GElf_Ehdr ehdr;
    GElf_Shdr shdr, shdr_prog;
    Elf_Data *data, *data_prog, *symbols = NULL;
    char *shname, *shname_prog;

    if (elf_version(EV_CURRENT) == EV_NONE)
        return 1;

    fd = open(path, O_RDONLY, 0);
    if (fd < 0)
        return 1;

    elf = elf_begin(fd, ELF_C_READ, NULL);

    if (!elf)
        return 1;

    if (gelf_getehdr(elf, &ehdr) != &ehdr)
        return 1;

    /* scan over all elf sections to get license and map info */
    for (i = 1; i < ehdr.e_shnum; i++) {

        if (get_sec(elf, i, &ehdr, &shname, &shdr, &data))
            continue;

        if (0)
            printf("section %d:%s data %p size %zd link %d flags %d\n",
                    i, shname, data->d_buf, data->d_size,
                    shdr.sh_link, (int) shdr.sh_flags);
    }
#if 1
    /* load programs that don't use maps */
    for (i = 1; i < ehdr.e_shnum; i++) {

        if (get_sec(elf, i, &ehdr, &shname, &shdr, &data))
            continue;

        if (strcmp(shname, ".text") == 0){
            //load_and_attach(shname, data->d_buf, data->d_size);
            insn_prog = (struct insn_prog *) data->d_buf;
            prog_size = data->d_size;
            printf("section name %s, data %p, size %d\n", shname, data->d_buf, data->d_size);
        }
    }
#endif
    close(fd);
    return 0;

}
/* Inititlize and prepare the eBPF prog */
unsigned int init_ebpf_prog(void)
{
    int ret = 0;
    if (load_bpf_file("./filter.bpf") != 0){
        printf("BPF load error");
        return 1;
    }
    char bpf_log_buf[1024];
    //unsigned int insn_count = sizeof(insn_prog) / sizeof(struct bpf_insn);
    unsigned int insn_count = prog_size / sizeof(struct bpf_insn);

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
    return ret;
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
    free(args);

    return 0;
}

