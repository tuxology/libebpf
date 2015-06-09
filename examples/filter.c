#include <include/bpf.h>
#include <include/bpf_trace.h>


static int (*bpf_strcmp)(void *ptr1, void *ptr2) = (void *) BPF_FUNC_strcmp;

struct filt_args {
    char *dev;
    int prot;
    int len;
};

int filter(struct bpf_context *ctx)
{
    char devname[] = "em1";
    struct filt_args *filt = 0;

    filt = (struct filt_args*) ctx->arg1;
    if (bpf_strcmp(&filt->dev, devname) == 0){
        return 1;
    }
    return 0;
}
