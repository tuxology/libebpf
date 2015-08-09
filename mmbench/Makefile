all: mmbench

OBJS = mmbench.o module_api.o utils.o

mmbench: $(OBJS)
	gcc $(OBJS) -o $@ -g -O0 -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm -lelf

mmbench.o:mmbench.c
	gcc -g -c $< -g -O0 -I../

module_api.o:module_api.c
	gcc -g -c $< -g -I../

utils.o:utils.c
	gcc -g -c $< -g -I../

clean:
	rm -rf *.o mmbench
