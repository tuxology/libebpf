all: test

test: test.o
	#gcc $< -o $@ -L../src/.libs/ -lebpf -lm
	gcc $< -o $@ -g -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm

test.o:test.c
	gcc -g -c $< -g -I../

clean:
	rm -rf *.o test
