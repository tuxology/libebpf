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

static int (*bpf_get_from_array)(void) = (void *) BPF_FUNC_get_from_array;

int filter(struct bpf_context *ctx)
{
    unsigned int temp = bpf_get_from_array();
    return 1;
}
