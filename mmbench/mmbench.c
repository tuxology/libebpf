/*
 * mmbench.c
 *
 * Userspace ebpf filter test with generated filter
 *
 * Copyright (C) 2012 Suchakra Sharma <suchakrapani.sharma@polymtl.ca>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; only
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include <fcntl.h>
#include <gelf.h>
#include <uapi/linux/bpf.h>
#include <sys/mman.h>
#include "utils.h"

#define PAGE_SIZE     4096
#define REPEAT 1000000

struct procdat
{
	unsigned int val[1000];
	unsigned int index;
	int thresh;
};


struct profile_args
{
    struct procdat *data;
    void *bare_mmap;
    int configfd;
};

/*
 * Read values from the kernel mmap
 */
int ebpf_shm_before(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;

	int ioctl_ret = lttngprofile_module_register(1);
	args->configfd = open("/sys/kernel/debug/ebpflttng", O_RDWR);

	if(args->configfd < 0)
	{
		perror("Open call failed");
		return -1;
	}

	args->data = mmap(NULL, PAGE_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, args->configfd, 0);

	if (args->data == MAP_FAILED)
	{
		perror("mmap operation failed");
		return -1;
	}
	return 0;
}

int ebpf_shm_main(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	unsigned int *val = args->data->val;
	volatile int temp;
	int idx = 0;

	for(idx = 0; idx <= 1000; idx++){
		temp = val[idx];
	}

	return 0;
}

int ebpf_shm_after(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	close(args->configfd);
	int ioctl_ret = lttngprofile_module_unregister();
	return 0;
}

/*
 * Baseline benchmark with bare mmap
 */
int baseline_before(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	args->bare_mmap = mmap(NULL, PAGE_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, 0, 0);
	memset(args->bare_mmap, 0, PAGE_SIZE);
	return 0;
}

int baseline_main(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	unsigned int *val = args->bare_mmap;
	volatile int temp;
	int idx = 0;

	for(idx = 0; idx <= 1000; idx++){
		temp = val[idx];
	}

	return 0;
}

int baseline_after(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	munmap(args->bare_mmap, PAGE_SIZE);
	return 0;
}

/*
 * Original ebpf read with system calls
 */
#define MAX_INDEX 1000
static void clear_array(int fd)
{
	int key;
	long *value = 0;

	for (key = 0; key < MAX_INDEX; key++) {
		bpf_update_elem(fd, &key, &value, BPF_ANY);
	}
}

int ebpf_orig_before(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;

	char *filename = "arraymap_kern.o";
	int option, i;

	/* load kernel program */
	if (load_bpf_file(filename)) {
		printf("ERROR: %s\n", filename);
		return 1;
	}
	clear_array(42);

	return 0;
}

int ebpf_orig_main(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	unsigned int *val = args->bare_mmap;
	volatile int temp;
	int idx = 0;

	for(idx = 0; idx <= 1000; idx++){
		temp = val[idx];
	}

	return 0;
}

int ebpf_orig_after(void *pargs)
{
	struct profile *prof = pargs;
	struct profile_args *args = prof->args;
	munmap(args->bare_mmap, PAGE_SIZE);
	return 0;
}

int main(int argv, char **argc)
{
    	struct profile_args pargs;

	struct profile prof[] = {
		{
			.name = "baseline",
			.before = baseline_before,
			.func = baseline_main,
			.after = baseline_after,
			.repeat = REPEAT,
			.args = &pargs,
		},
		{
			.name = "ebpf_shm",
			.before = ebpf_shm_before,
			.func = ebpf_shm_main,
			.after = ebpf_shm_after,
			.repeat = REPEAT,
			.args = &pargs,
		},
		{
			.name = "ebpf_orig",
			.before = ebpf_orig_before,
			.func = ebpf_orig_main,
			.after = ebpf_orig_after,
			.repeat = REPEAT,
			.args = &pargs,
		},
		{.name = NULL},
	};

	struct profile *curr;
	for (curr = prof; curr->name != NULL; curr++) {
		profile_combo(curr);
		profile_stats_print(curr, stdout);
	}

	return 0;
}
