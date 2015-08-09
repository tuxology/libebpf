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

struct procdat
{
	unsigned int val[1000];
	unsigned int index;
	int thresh;
};


struct mmap_info
{
	struct procdat *data;
	int reference;
};

int configfd;
struct procdat* addr = NULL;

int ebpf_shm_open()
{
	configfd = open("/sys/kernel/debug/ebpflttng", O_RDWR);

	if(configfd < 0)
	{
		perror("Open call failed");
		return -1;
	}

	addr = mmap(NULL, PAGE_SIZE, PROT_READ|PROT_WRITE, MAP_SHARED, configfd, 0);

	if (addr == MAP_FAILED)
	{
		perror("mmap operation failed");
		return -1;
	}
}

void ebpf_shm_close()
{
	close(configfd);
}

int get_from_array()
{
	volatile int temp;
	int idx = 0;

	for(idx = 0; idx <= 1000; idx++){
		temp = addr->val[idx];
		idx++;
	}

	return 0;
}

int main(int argv, char **argc)
{

	int ioctl_ret = lttngprofile_module_register(1);

	ebpf_shm_open();

	struct profile prof[] = {
		{
			.name = "get_from_array",
			.func = get_from_array,
			.repeat = 1000000,
		},
		{.name = NULL},
	};

	ebpf_shm_close();

	ioctl_ret = lttngprofile_module_unregister();

	struct profile *curr;
	for (curr = prof; curr->name != NULL; curr++) {
		profile_combo(curr);
		profile_stats_print(curr, stdout);
	}

	return 0;
}
