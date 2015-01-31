all: retlif

retlif: retlif.o
	gcc $< -o $@ -g -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm -lelf

retlif.o:retlif.c
	gcc -g -c $< -g -I../

clean:
	rm -rf *.o retlif
