#bin_PROGRAMS = test

#AM_CFLAGS = -Wall -g -O3

#test_SOURCES = test.c
#test_CFLAGS = -I$(top_srcdir)
#test_LDFLAGS = -L$(top_srcdir)/src/.libs/ -lm -lebpf -all-static

all: test
	
test: test.c
	$(CC) $< -o $@ -g -I../ -L../src/.libs/ -lebpf -lm
