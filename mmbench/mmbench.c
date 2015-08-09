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

int ebpf_shm_open(void *pargs)
{
	struct profile_args *args = pargs;
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
}

int ebpf_shm_close(void *pargs)
{
	struct profile_args *args = pargs;
	close(args->configfd);
	int ioctl_ret = lttngprofile_module_unregister();
	return 0;
}

int get_from_array(void *addr)
{
	unsigned int *val = addr;
	volatile int temp;
	int idx = 0;

	for(idx = 0; idx <= 1000; idx++){
		temp = val[idx];
	}

	return 0;
}

int default_shm_open(void *pargs)
{
	struct profile_args *args = pargs;
	args->bare_mmap = mmap(NULL, PAGE_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, 0, 0);
	memset(args->bare_mmap, 0, PAGE_SIZE);
	return 0;
}

int default_shm_close(void *pargs)
{
	struct profile_args *args = pargs;
	munmap(args->bare_mmap, PAGE_SIZE);
	return 0;
}


int main(int argv, char **argc)
{
    	struct profile_args pargs;



	struct profile prof[] = {
		{
			.name = "get_from_array",
			.before = ebpf_shm_open,
			.func = get_from_array,
			.after = ebpf_shm_close,
			.repeat = REPEAT,
        		.args = pargs.data->val,
		},
		{
			.name = "get_from_default_array",
			.before = default_shm_open,
			.func = get_from_array,
			.after = default_shm_close,
			.repeat = REPEAT,
            		.args = pargs.bare_mmap,
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
