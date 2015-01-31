#include <include/bpf.h>
#include <include/bpf_trace.h>
#include "filter.h"

int filter(struct bpf_context *ctx)
{
{% for num in range(n) %}
    char str{{ num }}[] = "str{{ num }}";
{% endfor %}
    struct filt_args *filt = 0;

    filt = (struct filt_args*) ctx->arg1;

    if (
{% for num in range(n) %}
    (bpf_strcmp(filt->str{{ num }}, str{{ num }}) == 0) &&
{% endfor %}
    (filt->int1 == 42)
    ){
        return 1;
    }

    return 0;
}
