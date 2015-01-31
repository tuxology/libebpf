static int (*bpf_strcmp)(void *ptr1, void *ptr2) = (void *) BPF_FUNC_strcmp;

struct filt_args {
{% for num in range(n) %}
    char *str{{ num }};
{% endfor %}
    int int1;
};

