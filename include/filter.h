/*
 * Linux Socket Filter Data Structures
 */
#ifndef __LINUX_FILTER_H__
#define __LINUX_FILTER_H__

#include <stdarg.h>
#include <stddef.h>
#include <udis86.h>
/*
#include <linux/compat.h>
#include <linux/skbuff.h>
#include <linux/linkage.h>
#include <linux/printk.h>
#include <linux/workqueue.h>
#include <asm/cacheflush.h>
*/
#include "uapi/filter.h"
#include "uapi/bpf.h"
//#include "filter.h"
/*
   struct sk_buff;
   struct sock;
   struct seccomp_data;
   */

#define CONFIG_BPF_JIT 1

struct callback_head {
    struct callback_head *next;
    void (*func)(struct callback_head *head);
};
#define rcu_head callback_head

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
     __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

struct bpf_prog_aux;

/* ArgX, context and stack frame pointer register positions. Note,
 * Arg1, Arg2, Arg3, etc are used as argument mappings of function
 * calls in BPF_CALL instruction.
 */
#define BPF_REG_ARG1	BPF_REG_1
#define BPF_REG_ARG2	BPF_REG_2
#define BPF_REG_ARG3	BPF_REG_3
#define BPF_REG_ARG4	BPF_REG_4
#define BPF_REG_ARG5	BPF_REG_5
#define BPF_REG_CTX	BPF_REG_6
#define BPF_REG_FP	BPF_REG_10

/* Additional register mappings for converted user programs. */
#define BPF_REG_A	BPF_REG_0
#define BPF_REG_X	BPF_REG_7
#define BPF_REG_TMP	BPF_REG_8

/* BPF program can access up to 512 bytes of stack space. */
#define MAX_BPF_STACK	512

/* Helper macros for filter block array initializers. */

/* ALU ops on registers, bpf_add|sub|...: dst_reg += src_reg */

#define BPF_ALU64_REG(OP, DST, SRC)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU64 | BPF_OP(OP) | BPF_X,	\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = 0 })

#define BPF_ALU32_REG(OP, DST, SRC)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_OP(OP) | BPF_X,		\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = 0 })

/* ALU ops on immediates, bpf_add|sub|...: dst_reg += imm32 */

#define BPF_ALU64_IMM(OP, DST, IMM)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU64 | BPF_OP(OP) | BPF_K,	\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = IMM })

#define BPF_ALU32_IMM(OP, DST, IMM)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_OP(OP) | BPF_K,		\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = IMM })

/* Endianess conversion, cpu_to_{l,b}e(), {l,b}e_to_cpu() */

#define BPF_ENDIAN(TYPE, DST, LEN)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_END | BPF_SRC(TYPE),	\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = LEN })

/* Short form of mov, dst_reg = src_reg */

#define BPF_MOV64_REG(DST, SRC)					\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU64 | BPF_MOV | BPF_X,		\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = 0 })

#define BPF_MOV32_REG(DST, SRC)					\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_MOV | BPF_X,		\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = 0 })

/* Short form of mov, dst_reg = imm32 */

#define BPF_MOV64_IMM(DST, IMM)					\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU64 | BPF_MOV | BPF_K,		\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = IMM })

#define BPF_MOV32_IMM(DST, IMM)					\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_MOV | BPF_K,		\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = IMM })

/* BPF_LD_IMM64 macro encodes single 'load 64-bit immediate' insn */
#define BPF_LD_IMM64(DST, IMM)					\
    BPF_LD_IMM64_RAW(DST, 0, IMM)

#define BPF_LD_IMM64_RAW(DST, SRC, IMM)				\
    ((struct bpf_insn) {					\
     .code  = BPF_LD | BPF_DW | BPF_IMM,		\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = (__u32) (IMM) }),			\
((struct bpf_insn) {					\
 .code  = 0, /* zero is reserved opcode */	\
 .dst_reg = 0,					\
 .src_reg = 0,					\
 .off   = 0,					\
 .imm   = ((__u64) (IMM)) >> 32 })

#define BPF_PSEUDO_MAP_FD	1

/* pseudo BPF_LD_IMM64 insn used to refer to process-local map_fd */
#define BPF_LD_MAP_FD(DST, MAP_FD)				\
    BPF_LD_IMM64_RAW(DST, BPF_PSEUDO_MAP_FD, MAP_FD)

/* Short form of mov based on type, BPF_X: dst_reg = src_reg, BPF_K: dst_reg = imm32 */

#define BPF_MOV64_RAW(TYPE, DST, SRC, IMM)			\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU64 | BPF_MOV | BPF_SRC(TYPE),	\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = IMM })

#define BPF_MOV32_RAW(TYPE, DST, SRC, IMM)			\
    ((struct bpf_insn) {					\
     .code  = BPF_ALU | BPF_MOV | BPF_SRC(TYPE),	\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = IMM })

/* Direct packet access, R0 = *(uint *) (skb->data + imm32) */

#define BPF_LD_ABS(SIZE, IMM)					\
    ((struct bpf_insn) {					\
     .code  = BPF_LD | BPF_SIZE(SIZE) | BPF_ABS,	\
     .dst_reg = 0,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = IMM })

/* Indirect packet access, R0 = *(uint *) (skb->data + src_reg + imm32) */

#define BPF_LD_IND(SIZE, SRC, IMM)				\
    ((struct bpf_insn) {					\
     .code  = BPF_LD | BPF_SIZE(SIZE) | BPF_IND,	\
     .dst_reg = 0,					\
     .src_reg = SRC,					\
     .off   = 0,					\
     .imm   = IMM })

/* Memory load, dst_reg = *(uint *) (src_reg + off16) */

#define BPF_LDX_MEM(SIZE, DST, SRC, OFF)			\
    ((struct bpf_insn) {					\
     .code  = BPF_LDX | BPF_SIZE(SIZE) | BPF_MEM,	\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = OFF,					\
     .imm   = 0 })

/* Memory store, *(uint *) (dst_reg + off16) = src_reg */

#define BPF_STX_MEM(SIZE, DST, SRC, OFF)			\
    ((struct bpf_insn) {					\
     .code  = BPF_STX | BPF_SIZE(SIZE) | BPF_MEM,	\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = OFF,					\
     .imm   = 0 })

/* Memory store, *(uint *) (dst_reg + off16) = imm32 */

#define BPF_ST_MEM(SIZE, DST, OFF, IMM)				\
    ((struct bpf_insn) {					\
     .code  = BPF_ST | BPF_SIZE(SIZE) | BPF_MEM,	\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = OFF,					\
     .imm   = IMM })

/* Conditional jumps against registers, if (dst_reg 'op' src_reg) goto pc + off16 */

#define BPF_JMP_REG(OP, DST, SRC, OFF)				\
    ((struct bpf_insn) {					\
     .code  = BPF_JMP | BPF_OP(OP) | BPF_X,		\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = OFF,					\
     .imm   = 0 })

/* Conditional jumps against immediates, if (dst_reg 'op' imm32) goto pc + off16 */

#define BPF_JMP_IMM(OP, DST, IMM, OFF)				\
    ((struct bpf_insn) {					\
     .code  = BPF_JMP | BPF_OP(OP) | BPF_K,		\
     .dst_reg = DST,					\
     .src_reg = 0,					\
     .off   = OFF,					\
     .imm   = IMM })

/* Function call */

#define BPF_EMIT_CALL(FUNC)					\
    ((struct bpf_insn) {					\
     .code  = BPF_JMP | BPF_CALL,			\
     .dst_reg = 0,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = ((FUNC) - __bpf_call_base) })

/* Raw code statement block */

#define BPF_RAW_INSN(CODE, DST, SRC, OFF, IMM)			\
    ((struct bpf_insn) {					\
     .code  = CODE,					\
     .dst_reg = DST,					\
     .src_reg = SRC,					\
     .off   = OFF,					\
     .imm   = IMM })

/* Program exit */

#define BPF_EXIT_INSN()						\
    ((struct bpf_insn) {					\
     .code  = BPF_JMP | BPF_EXIT,			\
     .dst_reg = 0,					\
     .src_reg = 0,					\
     .off   = 0,					\
     .imm   = 0 })

#define bytes_to_bpf_size(bytes)				\
    ({								\
     int bpf_size = -EINVAL;					\
     \
     if (bytes == sizeof(__u8))				\
     bpf_size = BPF_B;				\
     else if (bytes == sizeof(__u16))				\
     bpf_size = BPF_H;				\
     else if (bytes == sizeof(__u32))				\
     bpf_size = BPF_W;				\
     else if (bytes == sizeof(__u64))				\
     bpf_size = BPF_DW;				\
     \
     bpf_size;						\
     })

/* Macro to invoke filter function. */
#define SK_RUN_FILTER(filter, ctx) \
    (*filter->prog->bpf_func)(ctx, filter->prog->insnsi)

#ifdef CONFIG_COMPAT
/* A struct sock_filter is architecture independent. */
struct compat_sock_fprog {
    __u16		len;
    compat_uptr_t	filter;	/* struct sock_filter * */
};
#endif

struct sock_fprog_kern {
    __u16			len;
    struct sock_filter	*filter;
};

struct bpf_binary_header {
    unsigned int pages;
    __u8 image[];
};

struct bpf_prog {
    __u16			pages;		/* Number of allocated pages */
    _Bool			jited;		/* Is our filter JIT'ed? */
    __u32			len;		/* Number of filter blocks */
    struct sock_fprog_kern	*orig_prog;	/* Original BPF program */
    struct bpf_prog_aux	*aux;		/* Auxiliary fields */
    unsigned int		(*bpf_func)(const struct sk_buff *skb,
            const struct bpf_insn *filter);
    /* Instructions for interpreter */
    union {
        struct sock_filter	insns[0];
        struct bpf_insn		insnsi[0];
    };
};

struct sk_filter {
    atomic_t	refcnt;
    struct rcu_head	rcu;
    struct bpf_prog	*prog;
};

#define BPF_PROG_RUN(filter, ctx)  (*filter->bpf_func)(ctx, filter->insnsi)

static inline unsigned int bpf_prog_size(unsigned int proglen)
{
    return max(sizeof(struct bpf_prog),
            offsetof(struct bpf_prog, insns[proglen]));
}

#define bpf_classic_proglen(fprog) (fprog->len * sizeof(fprog->filter[0]))

#ifdef CONFIG_DEBUG_SET_MODULE_RONX
static inline void bpf_prog_lock_ro(struct bpf_prog *fp)
{
    set_memory_ro((unsigned long)fp, fp->pages);
}

static inline void bpf_prog_unlock_ro(struct bpf_prog *fp)
{
    set_memory_rw((unsigned long)fp, fp->pages);
}
#else
static inline void bpf_prog_lock_ro(struct bpf_prog *fp)
{
}

static inline void bpf_prog_unlock_ro(struct bpf_prog *fp)
{
}
#endif /* CONFIG_DEBUG_SET_MODULE_RONX */

int sk_filter(struct sock *sk, struct sk_buff *skb);

void bpf_prog_select_runtime(struct bpf_prog *fp);
void bpf_prog_free(struct bpf_prog *fp);

int bpf_convert_filter(struct sock_filter *prog, int len,
        struct bpf_insn *new_prog, int *new_len);

struct bpf_prog *bpf_prog_alloc(unsigned int size);
struct bpf_prog *bpf_prog_realloc(struct bpf_prog *fp_old, unsigned int size);
void __bpf_prog_free(struct bpf_prog *fp);
void fixup_bpf_calls(struct bpf_prog *prog);

static inline void bpf_prog_unlock_free(struct bpf_prog *fp)
{
    bpf_prog_unlock_ro(fp);
    __bpf_prog_free(fp);
}

int bpf_prog_create(struct bpf_prog **pfp, struct sock_fprog_kern *fprog);
void bpf_prog_destroy(struct bpf_prog *fp);

int sk_attach_filter(struct sock_fprog *fprog, struct sock *sk);
int sk_attach_filter_ebpf(__u32 ufd, struct sock *sk);
int sk_detach_filter(struct sock *sk);

int bpf_check_classic(const struct sock_filter *filter, unsigned int flen);
int sk_get_filter(struct sock *sk, struct sock_filter *filter,
        unsigned int len);

_Bool sk_filter_charge(struct sock *sk, struct sk_filter *fp);
void sk_filter_uncharge(struct sock *sk, struct sk_filter *fp);

__u64 __bpf_call_base(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
void bpf_int_jit_compile(struct bpf_prog *fp);

#ifdef CONFIG_BPF_JIT
typedef void (*bpf_jit_fill_hole_t)(void *area, unsigned int size);

struct bpf_binary_header *
bpf_jit_binary_alloc(unsigned int proglen, __u8 **image_ptr,
        unsigned int alignment,
        bpf_jit_fill_hole_t bpf_fill_ill_insns);
void bpf_jit_binary_free(struct bpf_binary_header *hdr);

void bpf_jit_compile(struct bpf_prog *fp);
void bpf_jit_free(struct bpf_prog *fp);

static inline void print_hex_dump(char *desc, void *addr, unsigned int len) {
#if 0
    int i;
    unsigned char buff[len+1];
    unsigned char *pc = (unsigned char*)addr;

    // Output description if given.
    if (desc != NULL)
        printf ("%s:\n", desc);

    // Process every byte in the data.
    for (i = 0; i < len; i++) {
        // Multiple of 16 means new line (with line offset).
        /*
           if ((i % 16) == 0) {
        // Just don't print ASCII for the zeroth line.
        if (i != 0)
        printf ("\n");

        // Output the offset.
        printf ("  %04x ", i);
        }
        */
        // Now the hex code for the specific character.
        printf ("%02x ", pc[i]);
    }
#endif

    /* x86 specific stuff */
    printf ("\n%s:\n", desc);

    ud_t ud_obj;
    ud_init(&ud_obj);
    ud_set_input_buffer(&ud_obj, (unsigned char*) addr, len);
    ud_set_mode(&ud_obj, 64);
    ud_set_syntax(&ud_obj, UD_SYN_ATT);

    while (ud_disassemble(&ud_obj)) {
        printf("%-4x%-24s%-30s\n", ud_insn_off(&ud_obj), ud_insn_hex(&ud_obj), ud_insn_asm(&ud_obj));
    }
    printf("\n");
}

static inline void bpf_jit_dump(unsigned int flen, unsigned int proglen,
        __u32 pass, void *image)
{
    printf("flen=%u proglen=%u pass=%u image=%pK\n",
            flen, proglen, pass, image);
    if (image)
        print_hex_dump("BPF JIT code", image, proglen);
    //        print_hex_dump(KERN_ERR, "JIT code: ", DUMP_PREFIX_OFFSET,
    //                16, 1, image, proglen, false);
}
#else
static inline void bpf_jit_compile(struct bpf_prog *fp)
{
}

static inline void bpf_jit_free(struct bpf_prog *fp)
{
    bpf_prog_unlock_free(fp);
}
#endif /* CONFIG_BPF_JIT */

#if 0
#define BPF_ANC		BIT(15)

static inline __u16 bpf_anc_helper(const struct sock_filter *ftest)
{
    //BUG_ON(ftest->code & BPF_ANC);

    switch (ftest->code) {
        case BPF_LD | BPF_W | BPF_ABS:
        case BPF_LD | BPF_H | BPF_ABS:
        case BPF_LD | BPF_B | BPF_ABS:
#define BPF_ANCILLARY(CODE)	case SKF_AD_OFF + SKF_AD_##CODE:	\
            return BPF_ANC | SKF_AD_##CODE
            switch (ftest->k) {
                BPF_ANCILLARY(PROTOCOL);
                BPF_ANCILLARY(PKTTYPE);
                BPF_ANCILLARY(IFINDEX);
                BPF_ANCILLARY(NLATTR);
                BPF_ANCILLARY(NLATTR_NEST);
                BPF_ANCILLARY(MARK);
                BPF_ANCILLARY(QUEUE);
                BPF_ANCILLARY(HATYPE);
                BPF_ANCILLARY(RXHASH);
                BPF_ANCILLARY(CPU);
                BPF_ANCILLARY(ALU_XOR_X);
                BPF_ANCILLARY(VLAN_TAG);
                BPF_ANCILLARY(VLAN_TAG_PRESENT);
                BPF_ANCILLARY(PAY_OFFSET);
                BPF_ANCILLARY(RANDOM);
            }
            /* Fallthrough. */
        default:
            return ftest->code;
    }
}

void *bpf_internal_load_pointer_neg_helper(const struct sk_buff *skb,
        int k, unsigned int size);

static inline void *bpf_load_pointer(const struct sk_buff *skb, int k,
        unsigned int size, void *buffer)
{
    if (k >= 0)
        return skb_header_pointer(skb, k, size, buffer);

    return bpf_internal_load_pointer_neg_helper(skb, k, size);
}
#endif

static inline int bpf_tell_extensions(void)
{
    return SKF_AD_MAX;
}

#endif /* __LINUX_FILTER_H__ */
