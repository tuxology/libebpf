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

    char str9[] = "str9";

    char str10[] = "str10";

    char str11[] = "str11";

    char str12[] = "str12";

    char str13[] = "str13";

    char str14[] = "str14";

    char str15[] = "str15";

    char str16[] = "str16";

    char str17[] = "str17";

    char str18[] = "str18";

    char str19[] = "str19";

    char str20[] = "str20";

    char str21[] = "str21";

    char str22[] = "str22";

    char str23[] = "str23";

    char str24[] = "str24";

    char str25[] = "str25";

    char str26[] = "str26";

    char str27[] = "str27";

    char str28[] = "str28";

    char str29[] = "str29";

    char str30[] = "str30";

    char str31[] = "str31";

    char str32[] = "str32";

    char str33[] = "str33";

    char str34[] = "str34";

    char str35[] = "str35";

    char str36[] = "str36";

    char str37[] = "str37";

    char str38[] = "str38";

    char str39[] = "str39";

    char str40[] = "str40";

    char str41[] = "str41";

    char str42[] = "str42";

    char str43[] = "str43";

    char str44[] = "str44";

    char str45[] = "str45";

    char str46[] = "str46";

    char str47[] = "str47";

    char str48[] = "str48";

    char str49[] = "str49";

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

    (bpf_strcmp(filt->str9, str9) == 0) &&

    (bpf_strcmp(filt->str10, str10) == 0) &&

    (bpf_strcmp(filt->str11, str11) == 0) &&

    (bpf_strcmp(filt->str12, str12) == 0) &&

    (bpf_strcmp(filt->str13, str13) == 0) &&

    (bpf_strcmp(filt->str14, str14) == 0) &&

    (bpf_strcmp(filt->str15, str15) == 0) &&

    (bpf_strcmp(filt->str16, str16) == 0) &&

    (bpf_strcmp(filt->str17, str17) == 0) &&

    (bpf_strcmp(filt->str18, str18) == 0) &&

    (bpf_strcmp(filt->str19, str19) == 0) &&

    (bpf_strcmp(filt->str20, str20) == 0) &&

    (bpf_strcmp(filt->str21, str21) == 0) &&

    (bpf_strcmp(filt->str22, str22) == 0) &&

    (bpf_strcmp(filt->str23, str23) == 0) &&

    (bpf_strcmp(filt->str24, str24) == 0) &&

    (bpf_strcmp(filt->str25, str25) == 0) &&

    (bpf_strcmp(filt->str26, str26) == 0) &&

    (bpf_strcmp(filt->str27, str27) == 0) &&

    (bpf_strcmp(filt->str28, str28) == 0) &&

    (bpf_strcmp(filt->str29, str29) == 0) &&

    (bpf_strcmp(filt->str30, str30) == 0) &&

    (bpf_strcmp(filt->str31, str31) == 0) &&

    (bpf_strcmp(filt->str32, str32) == 0) &&

    (bpf_strcmp(filt->str33, str33) == 0) &&

    (bpf_strcmp(filt->str34, str34) == 0) &&

    (bpf_strcmp(filt->str35, str35) == 0) &&

    (bpf_strcmp(filt->str36, str36) == 0) &&

    (bpf_strcmp(filt->str37, str37) == 0) &&

    (bpf_strcmp(filt->str38, str38) == 0) &&

    (bpf_strcmp(filt->str39, str39) == 0) &&

    (bpf_strcmp(filt->str40, str40) == 0) &&

    (bpf_strcmp(filt->str41, str41) == 0) &&

    (bpf_strcmp(filt->str42, str42) == 0) &&

    (bpf_strcmp(filt->str43, str43) == 0) &&

    (bpf_strcmp(filt->str44, str44) == 0) &&

    (bpf_strcmp(filt->str45, str45) == 0) &&

    (bpf_strcmp(filt->str46, str46) == 0) &&

    (bpf_strcmp(filt->str47, str47) == 0) &&

    (bpf_strcmp(filt->str48, str48) == 0) &&

    (bpf_strcmp(filt->str49, str49) == 0) &&

    (filt->int1 == 42)
    ){
        return 1;
    }

    return 0;
}