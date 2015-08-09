#include <include/bpf.h>
#include <include/bpf_trace.h>

/* Structs for UeBPF-KeBPF trial*/
struct procdat
{
    unsigned int val[1000];
    unsigned int index;
    int thresh;
    int miss;
};

struct filt_args {
    char *dev;
    int prot;
    int len;
};

static int (*bpf_strcmp)(void *ptr1, void *ptr2) = (void *) BPF_FUNC_strcmp;
static void (*bpf_set_threshold)(int thresh) = (void *) BPF_FUNC_set_threshold;
static int (*bpf_get_from_array)(void) = (void *) BPF_FUNC_get_from_array;

//static struct procdat* (*bpf_shm_open)() = (void *) BPF_FUNC_shm_open;
//static void (*bpf_shm_close)() = (void *) BPF_FUNC_shm_close;

int filter(struct bpf_context *ctx)
{
    char devname[] = "em1";
    struct filt_args *filt = 0;
    unsigned int temp;
//    struct procdat *addr;

//    addr = bpf_shm_open();
    bpf_set_threshold(2000);
//    temp = bpf_get_from_array();

    filt = (struct filt_args*) ctx->arg1;
    if (bpf_strcmp(&filt->dev, devname) == 0){
//    	bpf_shm_close();
        return 1;
    }

//    bpf_shm_close();
    return 0;
}
