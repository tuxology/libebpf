/*
 * arraymap_kern.c
 *
 *  Created on: Aug 9, 2015
 *      Author: francis
 */
#include <uapi/linux/bpf.h>
#include "bpf_helpers.h"
#include <linux/version.h>

struct bpf_map_def SEC("maps") hist_map = {
	.type = BPF_MAP_TYPE_ARRAY,
	.key_size = sizeof(u32),
	.value_size = sizeof(long),
	.max_entries = 64,
};

char _license[] SEC("license") = "GPL";
u32 _version SEC("version") = LINUX_VERSION_CODE;
