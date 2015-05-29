static int (*bpf_strcmp)(void *ptr1, void *ptr2) = (void *) BPF_FUNC_strcmp;

struct filt_args {

    char *str0;

    char *str1;

    char *str2;

    char *str3;

    char *str4;

    char *str5;

    char *str6;

    char *str7;

    char *str8;

    int int1;
};
