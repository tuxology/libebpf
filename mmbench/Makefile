all: mmbench

OBJS = mmbench.o module_api.o utils.o libbpf.o bpf_load.o

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

clean:
	rm -rf *.o mmbench
