/*
 * Userspace eBPF Core
 * -------------------
 *
 * Adapted from the new Kernel eBPF implementation designed by PLUMgrid.
 * Experimental release without verifier, useful only for tracing.
 *
 * Suchakra Sharma <suchakrapani.sharma@polymtl.ca>
 *
 * Original Kernel BPF Authors:
 *    Jay Schulist <jschlst@samba.org>
 *	  Alexei Starovoitov <ast@plumgrid.com>
 *	  Daniel Borkmann <dborkman@redhat.com>
 *
 * Other Contributors:
 *	  Andi Kleen - Fix a few bad bugs and races.
 *    Kris Katterjohn - Added many additional checks in bpf_check_classic()
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <errno.h>
#include <bpf.h>
#include <filter.h>
#include <sys/mman.h>
#include <fcntl.h>

/* Registers */
#define BPF_R0	regs[BPF_REG_0]
#define BPF_R1	regs[BPF_REG_1]
#define BPF_R2	regs[BPF_REG_2]
#define BPF_R3	regs[BPF_REG_3]
#define BPF_R4	regs[BPF_REG_4]
#define BPF_R5	regs[BPF_REG_5]
#define BPF_R6	regs[BPF_REG_6]
#define BPF_R7	regs[BPF_REG_7]
#define BPF_R8	regs[BPF_REG_8]
#define BPF_R9	regs[BPF_REG_9]
#define BPF_R10	regs[BPF_REG_10]

/* Named registers */
#define DST	regs[insn->dst_reg]
#define SRC	regs[insn->src_reg]
#define FP	regs[BPF_REG_FP]
#define ARG1	regs[BPF_REG_ARG1]
#define CTX	regs[BPF_REG_CTX]
#define IMM	insn->imm

#define min_t(type, x, y) ({                    \
        type __min1 = (x);                      \
        type __min2 = (y);                      \
        __min1 < __min2 ? __min1: __min2; })

#define NOINLINE __attribute__ ((noinline))
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#define ROUND_UP(N, S) ((((N) + (S) - 1) / (S)) * (S))
#define ARRAY_SIZE(x) (sizeof(x) / sizeof(*(x)))
#define __force        __attribute__((force))
#define __weak __attribute__((weak))
#define PAGE_SIZE getpagesize()

/* No hurry in this branch
 *
 * Exported for the bpf jit load helper.
 */

#define CONFIG_BPF_JIT 1

#if 0
/*disabling skb to be used as context so we don't need this */
void *bpf_internal_load_pointer_neg_helper(const struct sk_buff *skb, int k, unsigned int size)
{
    __u8 *ptr = NULL;

    if (k >= SKF_NET_OFF)
        ptr = skb_network_header(skb) + k - SKF_NET_OFF;
    else if (k >= SKF_LL_OFF)
        ptr = skb_mac_header(skb) + k - SKF_LL_OFF;
    if (ptr >= skb->head && ptr + size <= skb_tail_pointer(skb))
        return ptr;

    return NULL;
}
#endif

/* Structs for UeBPF-KeBPF trial*/
struct procdat
{
    int thresh;
    int miss;
};

struct mmap_info
{
    void *data;
    unsigned int thresh;
    int reference;
};


struct bpf_prog *bpf_prog_alloc(unsigned int size)
{
    struct bpf_prog_aux *aux;
    struct bpf_prog *fp;

    int page_size = getpagesize();

    size = ROUND_UP(size, page_size);
    fp = malloc(size);
    if (fp == NULL)
        return NULL;

    aux = malloc(sizeof(*aux));
    if (aux == NULL) {
        free(fp);
        return NULL;
    }

    fp->pages = size / page_size;
    fp->aux = aux;

    return fp;
}

struct bpf_prog *bpf_prog_realloc(struct bpf_prog *fp_old, unsigned int size)
{
    struct bpf_prog *fp;

    int page_size = getpagesize();

    size = ROUND_UP(size, page_size);
    if (size <= fp_old->pages * page_size)
        return fp_old;

    fp = malloc(size);
    if (fp != NULL) {
        memcpy(fp, fp_old, fp_old->pages * page_size);
        fp->pages = size / page_size;

        /* We keep fp->aux from fp_old around in the new
         * reallocated structure.
         */
        fp_old->aux = NULL;
        __bpf_prog_free(fp_old);
    }

    return fp;
}

void __bpf_prog_free(struct bpf_prog *fp)
{
    free(fp->aux);
    free(fp);
}

#ifdef CONFIG_BPF_JIT
void* alloc_mmap(size_t size) {
    void* ptr = mmap(0, size,
            PROT_READ | PROT_WRITE | PROT_EXEC,
            MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (ptr == (void*)-1) {
        perror("mmap");
        return NULL;
    }
    return ptr;
}

struct bpf_binary_header *
bpf_jit_binary_alloc(unsigned int proglen, __u8 **image_ptr,
        unsigned int alignment,
        bpf_jit_fill_hole_t bpf_fill_ill_insns)
{
    struct bpf_binary_header *hdr;
    unsigned int size, hole, start;

    /* Most of BPF filters are really small, but if some of them
     * fill a page, allow at least 128 extra bytes to insert a
     * random section of illegal instructions.
     */
    size = ROUND_UP(proglen + sizeof(*hdr) + 128, PAGE_SIZE);
    hdr = alloc_mmap(size);
    if (hdr == NULL)
        return NULL;

    /* Fill space with illegal/arch-dep instructions. */
    bpf_fill_ill_insns(hdr, size);

    hdr->pages = size / PAGE_SIZE;
    hole = min_t(unsigned int, size - (proglen + sizeof(*hdr)),
            PAGE_SIZE - sizeof(*hdr));
    start = (rand() % hole) & ~(alignment - 1);

    /* Leave a random number of instructions before BPF code. */
    *image_ptr = &hdr->image[start];

    return hdr;
}

void bpf_jit_binary_free(struct bpf_binary_header *hdr)
{
    free(hdr);
}
#endif /* CONFIG_BPF_JIT */

/* Helper Functions for BPF_CALL*/

static __u64 bpf_memcmp(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5)
{
    void *ptr1 = (void*) (long) r1;
    void *ptr2 = (void*) (long) r2;
    __u32 size = (__u32) r3;
    if (size < 64){
        return memcmp(ptr1, ptr2, size);
    }
    return -1;
}

static __u64 bpf_strcmp(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5)
{
    char *ptr1 = (char*) (long) r1;
    char *ptr2 = (char*) (long) r2;
    return strcmp(ptr1, ptr2);
}

static __u64 bpf_dummy(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5)
{
    printf("In bpf_dummy\n");
}

static __u64 bpf_set_threshold(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5)
{
    int configfd;
    struct procdat *address = NULL;

    configfd = open("/sys/kernel/debug/ebpflttng", O_RDWR);
    if(configfd < 0)
    {
        perror("Open call failed");
        return -1;
    }

    address = mmap(NULL, PAGE_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, configfd, 0);
    if (address == MAP_FAILED)
    {
        perror("mmap operation failed");
        return -1;
    }

    printf("Thresh %d\n", address->thresh);
    address->thresh = (unsigned int) r1;
    printf("New Thresh %d\n", address->thresh);
    close(configfd);
}

static struct bpf_func_proto filter_funcs[] = { 
    [BPF_FUNC_memcmp] = {
        .func = bpf_memcmp,
        .gpl_only = 0,
        .ret_type = RET_INTEGER,
        .arg1_type = ARG_ANYTHING,
        .arg2_type = ARG_PTR_TO_STACK,
        .arg3_type = ARG_CONST_STACK_SIZE,
    },
    [BPF_FUNC_strcmp] = {
        .func = bpf_strcmp,
        .gpl_only = 0,
        .ret_type = RET_INTEGER,
        .arg1_type = ARG_ANYTHING,
        .arg2_type = ARG_PTR_TO_STACK,
        .arg3_type = ARG_CONST_STACK_SIZE,
    },
    [BPF_FUNC_dummy] = {
        .func = bpf_dummy,
        .gpl_only = 0,
        .ret_type = RET_VOID,
    },
    [BPF_FUNC_set_threshold] = {
        .func = bpf_set_threshold,
        .gpl_only = 0,
        .ret_type = RET_VOID,
        .arg1_type = ARG_ANYTHING,
    },
};

static const struct bpf_func_proto *func_proto(enum bpf_func_id func_id)
{
    if (func_id < 0 || func_id >= ARRAY_SIZE(filter_funcs))
        return NULL;
    return &filter_funcs[func_id];
}
/* Handle BPF_CALL instructions
 * Make them call actual functions
 */
void fixup_bpf_calls(struct bpf_prog *prog)
{
    const struct bpf_func_proto *fn;
    int i;

    for (i = 0; i < prog->len; i++){
        struct bpf_insn *insn = &prog->insnsi[i];
        if (insn->code == (BPF_JMP | BPF_CALL)){
            fn = func_proto(insn->imm);
            if (!fn->func)
                printf("No func!\n");
            insn->imm = fn->func - __bpf_call_base;
        }
    }
}

/* Base function for offset calculation. Needs to go into .text section,
 * therefore keeping it non-static as well; will also be used by JITs
 * anyway later on, so do not let the compiler omit it.
 */
NOINLINE __u64 __bpf_call_base(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5)
{
    return 0;
}

/**
 *	__bpf_prog_run - run eBPF program on a given context
 *	@ctx: is the data we are operating on
 *	@insn: is the array of eBPF instructions
 *
 * Decode and execute eBPF instructions.
 */
static unsigned int __bpf_prog_run(void *ctx, const struct bpf_insn *insn)
{
    __u64 stack[MAX_BPF_STACK / sizeof(__u64)];
    __u64 regs[MAX_BPF_REG], tmp;
    static const void *jumptable[256] = {
        [0 ... 255] = &&default_label,
        /* Now overwrite non-defaults ... */
        /* 32 bit ALU operations */
        [BPF_ALU | BPF_ADD | BPF_X] = &&ALU_ADD_X,
        [BPF_ALU | BPF_ADD | BPF_K] = &&ALU_ADD_K,
        [BPF_ALU | BPF_SUB | BPF_X] = &&ALU_SUB_X,
        [BPF_ALU | BPF_SUB | BPF_K] = &&ALU_SUB_K,
        [BPF_ALU | BPF_AND | BPF_X] = &&ALU_AND_X,
        [BPF_ALU | BPF_AND | BPF_K] = &&ALU_AND_K,
        [BPF_ALU | BPF_OR | BPF_X]  = &&ALU_OR_X,
        [BPF_ALU | BPF_OR | BPF_K]  = &&ALU_OR_K,
        [BPF_ALU | BPF_LSH | BPF_X] = &&ALU_LSH_X,
        [BPF_ALU | BPF_LSH | BPF_K] = &&ALU_LSH_K,
        [BPF_ALU | BPF_RSH | BPF_X] = &&ALU_RSH_X,
        [BPF_ALU | BPF_RSH | BPF_K] = &&ALU_RSH_K,
        [BPF_ALU | BPF_XOR | BPF_X] = &&ALU_XOR_X,
        [BPF_ALU | BPF_XOR | BPF_K] = &&ALU_XOR_K,
        [BPF_ALU | BPF_MUL | BPF_X] = &&ALU_MUL_X,
        [BPF_ALU | BPF_MUL | BPF_K] = &&ALU_MUL_K,
        [BPF_ALU | BPF_MOV | BPF_X] = &&ALU_MOV_X,
        [BPF_ALU | BPF_MOV | BPF_K] = &&ALU_MOV_K,
        [BPF_ALU | BPF_DIV | BPF_X] = &&ALU_DIV_X,
        [BPF_ALU | BPF_DIV | BPF_K] = &&ALU_DIV_K,
        [BPF_ALU | BPF_MOD | BPF_X] = &&ALU_MOD_X,
        [BPF_ALU | BPF_MOD | BPF_K] = &&ALU_MOD_K,
        [BPF_ALU | BPF_NEG] = &&ALU_NEG,
        //        [BPF_ALU | BPF_END | BPF_TO_BE] = &&ALU_END_TO_BE,
        //        [BPF_ALU | BPF_END | BPF_TO_LE] = &&ALU_END_TO_LE,
        /* 64 bit ALU operations */
        [BPF_ALU64 | BPF_ADD | BPF_X] = &&ALU64_ADD_X,
        [BPF_ALU64 | BPF_ADD | BPF_K] = &&ALU64_ADD_K,
        [BPF_ALU64 | BPF_SUB | BPF_X] = &&ALU64_SUB_X,
        [BPF_ALU64 | BPF_SUB | BPF_K] = &&ALU64_SUB_K,
        [BPF_ALU64 | BPF_AND | BPF_X] = &&ALU64_AND_X,
        [BPF_ALU64 | BPF_AND | BPF_K] = &&ALU64_AND_K,
        [BPF_ALU64 | BPF_OR | BPF_X] = &&ALU64_OR_X,
        [BPF_ALU64 | BPF_OR | BPF_K] = &&ALU64_OR_K,
        [BPF_ALU64 | BPF_LSH | BPF_X] = &&ALU64_LSH_X,
        [BPF_ALU64 | BPF_LSH | BPF_K] = &&ALU64_LSH_K,
        [BPF_ALU64 | BPF_RSH | BPF_X] = &&ALU64_RSH_X,
        [BPF_ALU64 | BPF_RSH | BPF_K] = &&ALU64_RSH_K,
        [BPF_ALU64 | BPF_XOR | BPF_X] = &&ALU64_XOR_X,
        [BPF_ALU64 | BPF_XOR | BPF_K] = &&ALU64_XOR_K,
        [BPF_ALU64 | BPF_MUL | BPF_X] = &&ALU64_MUL_X,
        [BPF_ALU64 | BPF_MUL | BPF_K] = &&ALU64_MUL_K,
        [BPF_ALU64 | BPF_MOV | BPF_X] = &&ALU64_MOV_X,
        [BPF_ALU64 | BPF_MOV | BPF_K] = &&ALU64_MOV_K,
        [BPF_ALU64 | BPF_ARSH | BPF_X] = &&ALU64_ARSH_X,
        [BPF_ALU64 | BPF_ARSH | BPF_K] = &&ALU64_ARSH_K,
        [BPF_ALU64 | BPF_DIV | BPF_X] = &&ALU64_DIV_X,
        [BPF_ALU64 | BPF_DIV | BPF_K] = &&ALU64_DIV_K,
        [BPF_ALU64 | BPF_MOD | BPF_X] = &&ALU64_MOD_X,
        [BPF_ALU64 | BPF_MOD | BPF_K] = &&ALU64_MOD_K,
        [BPF_ALU64 | BPF_NEG] = &&ALU64_NEG,
        /* Call instruction */
        [BPF_JMP | BPF_CALL] = &&JMP_CALL,
        /* Jumps */
        [BPF_JMP | BPF_JA] = &&JMP_JA,
        [BPF_JMP | BPF_JEQ | BPF_X] = &&JMP_JEQ_X,
        [BPF_JMP | BPF_JEQ | BPF_K] = &&JMP_JEQ_K,
        [BPF_JMP | BPF_JNE | BPF_X] = &&JMP_JNE_X,
        [BPF_JMP | BPF_JNE | BPF_K] = &&JMP_JNE_K,
        [BPF_JMP | BPF_JGT | BPF_X] = &&JMP_JGT_X,
        [BPF_JMP | BPF_JGT | BPF_K] = &&JMP_JGT_K,
        [BPF_JMP | BPF_JGE | BPF_X] = &&JMP_JGE_X,
        [BPF_JMP | BPF_JGE | BPF_K] = &&JMP_JGE_K,
        [BPF_JMP | BPF_JSGT | BPF_X] = &&JMP_JSGT_X,
        [BPF_JMP | BPF_JSGT | BPF_K] = &&JMP_JSGT_K,
        [BPF_JMP | BPF_JSGE | BPF_X] = &&JMP_JSGE_X,
        [BPF_JMP | BPF_JSGE | BPF_K] = &&JMP_JSGE_K,
        [BPF_JMP | BPF_JSET | BPF_X] = &&JMP_JSET_X,
        [BPF_JMP | BPF_JSET | BPF_K] = &&JMP_JSET_K,
        /* Program return */
        [BPF_JMP | BPF_EXIT] = &&JMP_EXIT,
        /* Store instructions */
        [BPF_STX | BPF_MEM | BPF_B] = &&STX_MEM_B,
        [BPF_STX | BPF_MEM | BPF_H] = &&STX_MEM_H,
        [BPF_STX | BPF_MEM | BPF_W] = &&STX_MEM_W,
        [BPF_STX | BPF_MEM | BPF_DW] = &&STX_MEM_DW,
        [BPF_STX | BPF_XADD | BPF_W] = &&STX_XADD_W,
        //		[BPF_STX | BPF_XADD | BPF_DW] = &&STX_XADD_DW,
        [BPF_ST | BPF_MEM | BPF_B] = &&ST_MEM_B,
        [BPF_ST | BPF_MEM | BPF_H] = &&ST_MEM_H,
        [BPF_ST | BPF_MEM | BPF_W] = &&ST_MEM_W,
        [BPF_ST | BPF_MEM | BPF_DW] = &&ST_MEM_DW,
        /* Load instructions */
        [BPF_LDX | BPF_MEM | BPF_B] = &&LDX_MEM_B,
        [BPF_LDX | BPF_MEM | BPF_H] = &&LDX_MEM_H,
        [BPF_LDX | BPF_MEM | BPF_W] = &&LDX_MEM_W,
        [BPF_LDX | BPF_MEM | BPF_DW] = &&LDX_MEM_DW,
        [BPF_LD | BPF_IMM | BPF_DW] = &&LD_IMM_DW,
    };
    void *ptr;
    int off;

#define CONT	 ({ insn++; goto select_insn; })
#define CONT_JMP ({ insn++; goto select_insn; })

    FP = (__u64) (unsigned long) &stack[ARRAY_SIZE(stack)];
    ARG1 = (__u64) (unsigned long) ctx;

    /* Registers used in classic BPF programs need to be reset first. */
    regs[BPF_REG_A] = 0;
    regs[BPF_REG_X] = 0;

select_insn:
    goto *jumptable[insn->code];

    /* ALU */
#define ALU(OPCODE, OP)			\
    ALU64_##OPCODE##_X:		\
    DST = DST OP SRC;	\
    CONT;			\
    ALU_##OPCODE##_X:		\
    DST = (__u32) DST OP (__u32) SRC;	\
    CONT;			\
    ALU64_##OPCODE##_K:		\
    DST = DST OP IMM;		\
    CONT;			\
    ALU_##OPCODE##_K:		\
    DST = (__u32) DST OP (__u32) IMM;	\
    CONT;

    ALU(ADD,  +)
        ALU(SUB,  -)
        ALU(AND,  &)
        ALU(OR,   |)
        ALU(LSH, <<)
        ALU(RSH, >>)
        ALU(XOR,  ^)
        ALU(MUL,  *)
#undef ALU
        ALU_NEG:
        DST = (__u32) -DST;
    CONT;
ALU64_NEG:
    DST = -DST;
    CONT;
ALU_MOV_X:
    DST = (__u32) SRC;
    CONT;
ALU_MOV_K:
    DST = (__u32) IMM;
    CONT;
ALU64_MOV_X:
    DST = SRC;
    CONT;
ALU64_MOV_K:
    DST = IMM;
    CONT;
LD_IMM_DW:
    DST = (__u64) (__u32) insn[0].imm | ((__u64) (__u32) insn[1].imm) << 32;
    insn++;
    CONT;
ALU64_ARSH_X:
    (*(__s64 *) &DST) >>= SRC;
    CONT;
ALU64_ARSH_K:
    (*(__s64 *) &DST) >>= IMM;
    CONT;
ALU64_MOD_X:
    if (unlikely(SRC == 0))
        return 0;
    tmp = DST;
    DST = remainderl(tmp, SRC);
    CONT;
ALU_MOD_X:
    if (unlikely(SRC == 0))
        return 0;
    tmp = (__u32) DST;
    DST = remainderl(tmp, (__u32) SRC);
    CONT;
ALU64_MOD_K:
    tmp = DST;
    DST = remainderl(tmp, IMM);
    CONT;
ALU_MOD_K:
    tmp = (__u32) DST;
    DST = remainderl(tmp, (__u32) IMM);
    CONT;
ALU64_DIV_X:
    if (unlikely(SRC == 0))
        return 0;
    remainderl(DST, SRC);
    CONT;
ALU_DIV_X:
    if (unlikely(SRC == 0))
        return 0;
    tmp = (__u32) DST;
    remainderl(tmp, (__u32) SRC);
    DST = (__u32) tmp;
    CONT;
ALU64_DIV_K:
    remainderl(DST, IMM);
    CONT;
ALU_DIV_K:
    tmp = (__u32) DST;
    remainderl(tmp, (__u32) IMM);
    DST = (__u32) tmp;
    CONT;
#if 0
ALU_END_TO_BE:
    switch (IMM) {
        case 16:
            DST = (__force __u16) cpu_to_be16(DST);
            break;
        case 32:
            DST = (__force __u32) cpu_to_be32(DST);
            break;
        case 64:
            DST = (__force __u64) cpu_to_be64(DST);
            break;
    }
    CONT;
ALU_END_TO_LE:
    switch (IMM) {
        case 16:
            DST = (__force __u16) cpu_to_le16(DST);
            break;
        case 32:
            DST = (__force __u32) cpu_to_le32(DST);
            break;
        case 64:
            DST = (__force __u64) cpu_to_le64(DST);
            break;
    }
    CONT;
#endif
    /* CALL */
JMP_CALL:
    /* Function call scratches BPF_R1-BPF_R5 registers,
     * preserves BPF_R6-BPF_R9, and stores return value
     * into BPF_R0.
     */
    BPF_R0 = (__bpf_call_base + insn->imm)(BPF_R1, BPF_R2, BPF_R3,
            BPF_R4, BPF_R5);
    CONT;

    /* JMP */
JMP_JA:
    insn += insn->off;
    CONT;
JMP_JEQ_X:
    if (DST == SRC) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JEQ_K:
    if (DST == IMM) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JNE_X:
    if (DST != SRC) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JNE_K:
    if (DST != IMM) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JGT_X:
    if (DST > SRC) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JGT_K:
    if (DST > IMM) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JGE_X:
    if (DST >= SRC) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JGE_K:
    if (DST >= IMM) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSGT_X:
    if (((__s64) DST) > ((__s64) SRC)) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSGT_K:
    if (((__s64) DST) > ((__s64) IMM)) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSGE_X:
    if (((__s64) DST) >= ((__s64) SRC)) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSGE_K:
    if (((__s64) DST) >= ((__s64) IMM)) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSET_X:
    if (DST & SRC) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_JSET_K:
    if (DST & IMM) {
        insn += insn->off;
        CONT_JMP;
    }
    CONT;
JMP_EXIT:
    return BPF_R0;

    /* STX and ST and LDX*/
#define LDST(SIZEOP, SIZE)						\
    STX_MEM_##SIZEOP:						\
    *(SIZE *)(unsigned long) (DST + insn->off) = SRC;	\
    CONT;							\
    ST_MEM_##SIZEOP:						\
    *(SIZE *)(unsigned long) (DST + insn->off) = IMM;	\
    CONT;							\
    LDX_MEM_##SIZEOP:						\
    DST = *(SIZE *)(unsigned long) (SRC + insn->off);	\
    CONT;

    LDST(B,   __u8)
        LDST(H,  __u16)
        LDST(W,  __u32)
        LDST(DW, __u64)
#undef LDST
        STX_XADD_W: /* lock xadd *(u32 *)(dst_reg + off16) += src_reg */
        atomic_add((__u32) SRC, (atomic_t *)(unsigned long)
                (DST + insn->off));
    CONT;

default_label:
    /* If we ever reach this, we have a bug somewhere. */
    printf("unknown opcode %02x\n", insn->code);
    return 0;
}

void __weak bpf_int_jit_compile(struct bpf_prog *prog)
{
}

/**
 *	bpf_prog_select_runtime - select execution runtime for BPF program
 *	@fp: bpf_prog populated with internal BPF program
 *
 * try to JIT internal BPF program, if JIT is not available select interpreter
 * BPF program will be executed via BPF_PROG_RUN() macro
 */
void bpf_prog_select_runtime(struct bpf_prog *fp)
{
    fp->bpf_func = (void *) __bpf_prog_run;

    /* Probe if internal BPF can be JITed */
    bpf_int_jit_compile(fp);
    /* Lock whole bpf_prog as read-only */
    bpf_prog_lock_ro(fp);
}

/* Free internal BPF program */
void bpf_prog_free(struct bpf_prog *fp)
{
    struct bpf_prog_aux *aux = fp->aux;
    aux->prog = fp;
    bpf_jit_free(aux->prog);
}