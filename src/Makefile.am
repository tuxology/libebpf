AM_CFLAGS = -g -fPIC -Wall -O3
LDFLAGS = -ludis86

lib_LTLIBRARIES = libebpf.la
libebpf_la_SOURCES = core.c bpf_jit_comp.c
libebpf_la_LDFLAGS = -avoid-version -shared
libebpf_la_CPPFLAGS=-I$(top_srcdir)
