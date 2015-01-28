all: test filter_test

test: test.o
	gcc $< -o $@ -g -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm

test.o:test.c
	gcc -g -c $< -g -I../

filter_test: filter_test.o
	gcc $< -o $@ -g -Wl,-rpath,'$$ORIGIN/../src/.libs' -L../src/.libs -lebpf -lm -lelf

filter_test.o:filter_test.c
	gcc -g -c $< -g -I../

clean:
	rm -rf *.o test filter_test
