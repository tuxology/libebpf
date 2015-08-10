all: arraymap_kern.o mmbench

OBJS = mmbench.o module_api.o utils.o libbpf.o bpf_load.o
LLC=llc

mmbench: $(OBJS)
	gcc $(OBJS) -o $@ -g -O0 -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lm -lelf

mmbench.o: mmbench.c
	gcc -g -c $< -g -O0 -I../../linux/usr/include

module_api.o: module_api.c
	gcc -g -c $< -g 

utils.o: utils.c
	gcc -g -c $< -g

libbpf.o: libbpf.c
	gcc -g -c $< -g  -I../../linux/usr/include

bpf_load.o: bpf_load.c
	gcc -g -c $< -g  -I../../linux/usr/include

KDIR = ../../linux
INCLUDES = -isystem /usr/lib/gcc/x86_64-linux-gnu/4.9/include -I$(KDIR)/arch/x86/include -I$(KDIR)/arch/x86/include/generated/uapi -I$(KDIR)/arch/x86/include/generated  -I$(KDIR)/include -I$(KDIR)/arch/x86/include/uapi -I$(KDIR)/arch/x86/include/generated/uapi -I$(KDIR)/include/uapi -I$(KDIR)/include/generated/uapi -include $(KDIR)/include/linux/kconfig.h

arraymap_kern.o: arraymap_kern.c
	clang -nostdinc $(INCLUDES) $(EXTRA_CFLAGS) \
		-D__KERNEL__ -Wno-unused-value -Wno-pointer-sign \
                -O2 -emit-llvm -c $< -o -| $(LLC) -march=bpf -filetype=obj -o $@

clean:
	rm -rf *.o mmbench
