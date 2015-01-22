/* Copyright (c) 2011-2014 PLUMgrid, http://plumgrid.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 */
#ifndef _LINUX_KERNEL_BPF_TRACE_H
#define _LINUX_KERNEL_BPF_TRACE_H

/* For tracing filters save first six arguments of tracepoint events.
 * argN fields match one to one to arguments passed to tracepoint events.
 */
struct bpf_context {
	__u64 arg1;
	__u64 arg2;
	__u64 arg3;
	__u64 arg4;
	__u64 arg5;
	__u64 arg6;
	__u64 ret;
};

#endif /* _LINUX_KERNEL_BPF_TRACE_H */
