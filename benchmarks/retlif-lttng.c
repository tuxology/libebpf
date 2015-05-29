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

#include "filter.h"

/* Define tracepoint event */
#define TRACEPOINT_DEFINE
#define TRACEPOINT_CREATE_PROBES
#include "retlif-lttng_tp.h"

#define tic() do { struct timespec ts_start, ts_end; clock_gettime(CLOCK_MONOTONIC, &ts_start)
#define toc() clock_gettime(CLOCK_MONOTONIC, &ts_end); \
              printf("%lf\n", (ts_end.tv_sec - ts_start.tv_sec) + (double)(ts_end.tv_nsec - ts_start.tv_nsec)/1e9); } \
                            while (0)

/* Global definitions */
struct bpf_prog *prog;
struct bpf_insn *insn_prog;
int prog_size = 0;
unsigned long NR_RUNS = 0;

static void  *u64_to_ptr(__u64 val){
    return (void *) (unsigned long) val;
}

static __u64 ptr_to_u64(void *ptr){
    return (__u64) (unsigned long) ptr;
}

unsigned int filter(struct bpf_prog *prog1, struct bpf_context *ctx){
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

    for (i = 1; i < ehdr.e_shnum; i++) {

        if (get_sec(elf, i, &ehdr, &shname, &shdr, &data))
            continue;

        if (strcmp(shname, ".text") == 0){
            insn_prog = (struct insn_prog *) data->d_buf;
            prog_size = data->d_size;
            if (0)
                printf("section name %s, data %p, size %d\n", shname, data->d_buf, data->d_size);
        }
    }

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
    //printf("JITed? : %d\n", prog->jited);

    /* set context values */
    return ret;
}

unsigned int run_bpf_filt(struct filt_args *fargs)
{
    unsigned int ret = 0;
    struct bpf_context bctx = {};
    bctx.arg1 = (__u64) fargs;
    ret = filter(prog, &bctx);
    return ret;
}

unsigned int run_simple_filt(struct filt_args *fargs)
{
    unsigned int ret = 0;
    if (

    (strcmp(fargs->str0, "str0") == 0) &&

    (strcmp(fargs->str1, "str1") == 0) &&

    (strcmp(fargs->str2, "str2") == 0) &&

    (strcmp(fargs->str3, "str3") == 0) &&

    (strcmp(fargs->str4, "str4") == 0) &&

    (strcmp(fargs->str5, "str5") == 0) &&

    (strcmp(fargs->str6, "str6") == 0) &&

    (strcmp(fargs->str7, "str7") == 0) &&

    (strcmp(fargs->str8, "str8") == 0) &&

    (fargs->int1 == 42))
    {
        ret = 1;
    }
    else
    {
        ret = 0;
    }

    return ret;
}


void cleanup(void)
{
    bpf_prog_free(prog);
}

int main(int argc, char **argv)
{
    int i;
    NR_RUNS = atoi(getenv("NR_RUNS"));

    struct filt_args *args = (struct filt_args *) malloc (sizeof(struct filt_args));

    args->str0 = "str0";

    args->str1 = "str1";

    args->str2 = "str2";

    args->str3 = "str3";

    args->str4 = "str4";

    args->str5 = "str5";

    args->str6 = "str6";

    args->str7 = "str7";

    args->str8 = "str8";

    args->int1 = 42;

    if (argc < 2){
        printf("Check number or args\n");
        return 0;
    }

    if (strcmp(argv[1],  "BPF") == 0)
    {
        //printf("Running BPF..\n");
        /* Prepare eBPF prog*/
        int ret = init_ebpf_prog();
        tic();
        for (i=0; i<NR_RUNS; i++)
        {
            ret = run_bpf_filt(args);
        if (ret == 1){
            printf("True\n");
            //tracepoint(retlif_tp, tptest);
            tracepoint(retlif_tp, tpfilt,

                args->str0,

                args->str1,

                args->str2,

                args->str3,

                args->str4,

                args->str5,

                args->str6,

                args->str7,

                args->str8,

                args->int1
        );
        }
        else {
            printf("False\n");
        }
        }
        toc();
        cleanup();
        free(args);

        return 0;
    }

#if 0
    if (strcmp(argv[1],  "SIMPLE") == 0)
    {
        //printf("Running SIMPLE..\n");
        int ret = 0;
        tic();
        for (i=0; i<NR_RUNS; i++)
        {
            ret = run_simple_filt(args);
        }
        if (ret == 1){
            printf("True\n");
            tracepoint(retlif_tp, tptest);
        }
        else {
            printf("False\n");
        }
        toc();
        return 0;
    }
#endif

    if (strcmp(argv[1],  "CLEAN") == 0)
    {
        //printf("Running CLEAN..\n");
        int ret = 0;
        tic();
        for (i=0; i<NR_RUNS; i++)
        {
            //tracepoint(retlif_tp, tptest);
            tracepoint(retlif_tp, tpfilt,

                args->str0,

                args->str1,

                args->str2,

                args->str3,

                args->str4,

                args->str5,

                args->str6,

                args->str7,

                args->str8,

                args->int1
            );
        }
        toc();
        return 0;
    }

    if (strcmp(argv[1],  "BPFFALSE") == 0)
    {
        //printf("Running BPF FALSE..\n");
        /* Prepare eBPF prog*/
        int ret = init_ebpf_prog();
        tic();
        for (i=0; i<NR_RUNS; i++)
        {
            ret = run_bpf_filt(args);
            ret = 0; // force it to be false
        if (ret == 1){
            printf("True\n");
            //tracepoint(retlif_tp, tptest);
            tracepoint(retlif_tp, tpfilt,

                args->str0,

                args->str1,

                args->str2,

                args->str3,

                args->str4,

                args->str5,

                args->str6,

                args->str7,

                args->str8,

                args->int1
        );
        }
        else {
            printf("False\n");
            // This tracepoint is not recording.
            // Just adds up time for more realistic comparison
            tracepoint(retlif_tp, tpfilt,

                args->str0,

                args->str1,

                args->str2,

                args->str3,

                args->str4,

                args->str5,

                args->str6,

                args->str7,

                args->str8,

                args->int1
        );
        }
        }
        toc();
        cleanup();
        free(args);

        return 0;
    }
    printf("Check args..\n");
}
