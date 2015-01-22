/* Copyright (c) 2011-2014 PLUMgrid, http://plumgrid.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 */
#ifndef _LINUX_BPF_H
#define _LINUX_BPF_H 1

#include "../include/uapi/bpf.h"
#include "../include/atomic.h"
//#include <linux/workqueue.h>
//#include <linux/file.h>

struct list_head {
    struct list_head *next, *prev;
};

struct bpf_map;

/* map is generic key/value storage optionally accesible by eBPF programs */
struct bpf_map_ops {
	/* funcs callable from userspace (via syscall) */
	struct bpf_map *(*map_alloc)(union bpf_attr *attr);
	void (*map_free)(struct bpf_map *);
	int (*map_get_next_key)(struct bpf_map *map, void *key, void *next_key);

	/* funcs callable from userspace and from eBPF programs */
	void *(*map_lookup_elem)(struct bpf_map *map, void *key);
	int (*map_update_elem)(struct bpf_map *map, void *key, void *value);
	int (*map_delete_elem)(struct bpf_map *map, void *key);
};

struct bpf_map {
//	atomic_t refcnt;
	enum bpf_map_type map_type;
	__u32 key_size;
	__u32 value_size;
	__u32 max_entries;
	struct bpf_map_ops *ops;
	//struct work_struct work;
};

struct bpf_map_type_list {
	struct list_head list_node;
	struct bpf_map_ops *ops;
	enum bpf_map_type type;
};

void bpf_register_map_type(struct bpf_map_type_list *tl);
void bpf_map_put(struct bpf_map *map);
struct bpf_map *bpf_map_get(struct fd f);

/* function argument constraints */
enum bpf_arg_type {
	ARG_ANYTHING = 0,	/* any argument is ok */

	/* the following constraints used to prototype
	 * bpf_map_lookup/update/delete_elem() functions
	 */
	ARG_CONST_MAP_PTR,	/* const argument used as pointer to bpf_map */
	ARG_PTR_TO_MAP_KEY,	/* pointer to stack used as map key */
	ARG_PTR_TO_MAP_VALUE,	/* pointer to stack used as map value */

	/* the following constraints used to prototype bpf_memcmp() and other
	 * functions that access data on eBPF program stack
	 */
	ARG_PTR_TO_STACK,	/* any pointer to eBPF program stack */
	ARG_CONST_STACK_SIZE,	/* number of bytes accessed from stack */
};

/* type of values returned from helper functions */
enum bpf_return_type {
	RET_INTEGER,			/* function returns integer */
	RET_VOID,			/* function doesn't return anything */
	RET_PTR_TO_MAP_VALUE_OR_NULL,	/* returns a pointer to map elem value or NULL */
};

/* eBPF function prototype used by verifier to allow BPF_CALLs from eBPF programs
 * to in-kernel helper functions and for adjusting imm32 field in BPF_CALL
 * instructions after verifying
 */
struct bpf_func_proto {
	__u64 (*func)(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
	_Bool gpl_only;
	enum bpf_return_type ret_type;
	enum bpf_arg_type arg1_type;
	enum bpf_arg_type arg2_type;
	enum bpf_arg_type arg3_type;
	enum bpf_arg_type arg4_type;
	enum bpf_arg_type arg5_type;
};

/* bpf_context is intentionally undefined structure. Pointer to bpf_context is
 * the first argument to eBPF programs.
 * For socket filters: 'struct bpf_context *' == 'struct sk_buff *'
 */
struct bpf_context;

enum bpf_access_type {
	BPF_READ = 1,
	BPF_WRITE = 2
};

struct bpf_verifier_ops {
	/* return eBPF function prototype for verification */
	const struct bpf_func_proto *(*get_func_proto)(enum bpf_func_id func_id);

	/* return true if 'size' wide access at offset 'off' within bpf_context
	 * with 'type' (read or write) is allowed
	 */
	_Bool (*is_valid_access)(int off, int size, enum bpf_access_type type);
};

struct bpf_prog_type_list {
	struct list_head list_node;
	struct bpf_verifier_ops *ops;
	enum bpf_prog_type type;
};

void bpf_register_prog_type(struct bpf_prog_type_list *tl);

struct bpf_prog;

struct bpf_prog_aux {
	atomic_t refcnt;
	_Bool is_gpl_compatible;
	enum bpf_prog_type prog_type;
	struct bpf_verifier_ops *ops;
	struct bpf_map **used_maps;
	__u32 used_map_cnt;
	struct bpf_prog *prog;
	//struct work_struct work;
};

void bpf_prog_put(struct bpf_prog *prog);
struct bpf_prog *bpf_prog_get(__u32 ufd);
/* verify correctness of eBPF program */
int bpf_check(struct bpf_prog *fp, union bpf_attr *attr);

/* in-kernel helper functions called from eBPF programs */
__u64 bpf_map_lookup_elem(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
__u64 bpf_map_update_elem(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);
__u64 bpf_map_delete_elem(__u64 r1, __u64 r2, __u64 r3, __u64 r4, __u64 r5);

#endif /* _LINUX_BPF_H */
