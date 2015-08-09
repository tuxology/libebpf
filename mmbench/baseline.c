/*
 * mmapbench.c
 *
 *  Created on: Aug 7, 2015
 *      Author: francis
 */


#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <string.h>
#include "utils.h"

#define PAGE_SIZE 4096

int do_ebpf_read(void *args)
{
    /* TODO */
    return 0;
}

int do_mmap_read_long(void *args)
{
    long *buf = args;
    int i;
    volatile int val;

    for (i = 0; i < PAGE_SIZE / sizeof(long); i++) {
        val = buf[i];
    }
    return 0;
}

int do_mmap_read_int(void *args)
{
    int *buf = args;
    int i;
    volatile int val;

    for (i = 0; i < PAGE_SIZE / sizeof(int); i++) {
        val = buf[i];
    }
    return 0;
}

int do_mmap_read_byte(void *args)
{
    char *buf = args;
    int i;
    volatile int val;

    for (i = 0; i < PAGE_SIZE / sizeof(char); i++) {
        val = buf[i];
    }
    return 0;
}

int main(int argc, char **argv) {

    void *mmap_addr = mmap(NULL, PAGE_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, 0, 0);
    memset(mmap_addr, 0xCA, PAGE_SIZE);

    struct profile prof[] = {
        {
            .name = "do_mmap_read_long",
            .func = do_mmap_read_long,
            .repeat = 1000000,
            .args = mmap_addr,
        },
        {
            .name = "do_mmap_read_int",
            .func = do_mmap_read_int,
            .repeat = 1000000,
            .args = mmap_addr,
        },
        {
            .name = "do_mmap_read_byte",
            .func = do_mmap_read_byte,
            .repeat = 1000000,
            .args = mmap_addr,
        },
        { .name = NULL },
    };
    struct profile *curr;
    for (curr = prof; curr->name != NULL; curr++) {
        profile_combo(curr);
        profile_stats_print(curr, stdout);
    }
    return 0;
}
