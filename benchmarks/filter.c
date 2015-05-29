#include <include/bpf.h>
#include <include/bpf_trace.h>
#include "filter.h"

int filter(struct bpf_context *ctx)
{

    char str0[] = "str0";

    char str1[] = "str1";

    char str2[] = "str2";

    char str3[] = "str3";

    char str4[] = "str4";

    char str5[] = "str5";

    char str6[] = "str6";

    char str7[] = "str7";

    char str8[] = "str8";

    struct filt_args *filt = 0;

    filt = (struct filt_args*) ctx->arg1;

    if (

    (bpf_strcmp(filt->str0, str0) == 0) &&

    (bpf_strcmp(filt->str1, str1) == 0) &&

    (bpf_strcmp(filt->str2, str2) == 0) &&

    (bpf_strcmp(filt->str3, str3) == 0) &&

    (bpf_strcmp(filt->str4, str4) == 0) &&

    (bpf_strcmp(filt->str5, str5) == 0) &&

    (bpf_strcmp(filt->str6, str6) == 0) &&

    (bpf_strcmp(filt->str7, str7) == 0) &&

    (bpf_strcmp(filt->str8, str8) == 0) &&

    (filt->int1 == 42)
    ){
        return 1;
    }

    return 0;
}