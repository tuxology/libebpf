all: retlif

retlif: retlif.o
	gcc $< -o $@ -g -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm -lelf -llttng-ust -ldl

retlif.o:retlif.c
	gcc -g -c $< -g -I../ -I.

clean:
	rm -rf *.o retlif
