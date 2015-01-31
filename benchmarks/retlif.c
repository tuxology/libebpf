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

/* Global definitions */
struct bpf_prog *prog;
struct bpf_insn *insn_prog;
int prog_size = 0;

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
    printf("JITed? : %d\n", prog->jited);

    /* set context values */
    return ret;
}

unsigned int run_bpf_filt(struct filt_args *fargs)
{
    struct bpf_context bctx = {};
    bctx.arg1 = (__u64) fargs;

    unsigned int ret = 0;
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

    (strcmp(fargs->str9, "str9") == 0) &&

    (strcmp(fargs->str10, "str10") == 0) &&

    (strcmp(fargs->str11, "str11") == 0) &&

    (strcmp(fargs->str12, "str12") == 0) &&

    (strcmp(fargs->str13, "str13") == 0) &&

    (strcmp(fargs->str14, "str14") == 0) &&

    (strcmp(fargs->str15, "str15") == 0) &&

    (strcmp(fargs->str16, "str16") == 0) &&

    (strcmp(fargs->str17, "str17") == 0) &&

    (strcmp(fargs->str18, "str18") == 0) &&

    (strcmp(fargs->str19, "str19") == 0) &&

    (strcmp(fargs->str20, "str20") == 0) &&

    (strcmp(fargs->str21, "str21") == 0) &&

    (strcmp(fargs->str22, "str22") == 0) &&

    (strcmp(fargs->str23, "str23") == 0) &&

    (strcmp(fargs->str24, "str24") == 0) &&

    (strcmp(fargs->str25, "str25") == 0) &&

    (strcmp(fargs->str26, "str26") == 0) &&

    (strcmp(fargs->str27, "str27") == 0) &&

    (strcmp(fargs->str28, "str28") == 0) &&

    (strcmp(fargs->str29, "str29") == 0) &&

    (strcmp(fargs->str30, "str30") == 0) &&

    (strcmp(fargs->str31, "str31") == 0) &&

    (strcmp(fargs->str32, "str32") == 0) &&

    (strcmp(fargs->str33, "str33") == 0) &&

    (strcmp(fargs->str34, "str34") == 0) &&

    (strcmp(fargs->str35, "str35") == 0) &&

    (strcmp(fargs->str36, "str36") == 0) &&

    (strcmp(fargs->str37, "str37") == 0) &&

    (strcmp(fargs->str38, "str38") == 0) &&

    (strcmp(fargs->str39, "str39") == 0) &&

    (strcmp(fargs->str40, "str40") == 0) &&

    (strcmp(fargs->str41, "str41") == 0) &&

    (strcmp(fargs->str42, "str42") == 0) &&

    (strcmp(fargs->str43, "str43") == 0) &&

    (strcmp(fargs->str44, "str44") == 0) &&

    (strcmp(fargs->str45, "str45") == 0) &&

    (strcmp(fargs->str46, "str46") == 0) &&

    (strcmp(fargs->str47, "str47") == 0) &&

    (strcmp(fargs->str48, "str48") == 0) &&

    (strcmp(fargs->str49, "str49") == 0) &&

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
    return 0;
}

int main(int argc, char **argv)
{
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

    args->str9 = "str9";

    args->str10 = "str10";

    args->str11 = "str11";

    args->str12 = "str12";

    args->str13 = "str13";

    args->str14 = "str14";

    args->str15 = "str15";

    args->str16 = "str16";

    args->str17 = "str17";

    args->str18 = "str18";

    args->str19 = "str19";

    args->str20 = "str20";

    args->str21 = "str21";

    args->str22 = "str22";

    args->str23 = "str23";

    args->str24 = "str24";

    args->str25 = "str25";

    args->str26 = "str26";

    args->str27 = "str27";

    args->str28 = "str28";

    args->str29 = "str29";

    args->str30 = "str30";

    args->str31 = "str31";

    args->str32 = "str32";

    args->str33 = "str33";

    args->str34 = "str34";

    args->str35 = "str35";

    args->str36 = "str36";

    args->str37 = "str37";

    args->str38 = "str38";

    args->str39 = "str39";

    args->str40 = "str40";

    args->str41 = "str41";

    args->str42 = "str42";

    args->str43 = "str43";

    args->str44 = "str44";

    args->str45 = "str45";

    args->str46 = "str46";

    args->str47 = "str47";

    args->str48 = "str48";

    args->str49 = "str49";

    args->int1 = 42;

    if (argc < 2){
        printf("Check number or args\n");
        return 0;
    }

    if (strcmp(argv[1],  "BPF") == 0)
    {
        printf("Running BPF..\n");
        /* Prepare eBPF prog*/
        int ret = init_ebpf_prog();
        ret = run_bpf_filt(args);
        if (ret == 1){
            printf("True\n");
        }
        else {
            printf("False\n");
        }
        cleanup();
        free(args);

        return 0;
    }

    if (strcmp(argv[1],  "SIMPLE") == 0)
    {
        printf("Running SIMPLE..\n");
        int ret = run_simple_filt(args);
        if (ret == 1){
            printf("True\n");
        }
        else {
            printf("False\n");
        }
       return 0;
    }
    printf("Check args..\n");
}
