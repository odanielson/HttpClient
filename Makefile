CC = gcc
CFLAGS = -Wall -O2

all: SimpleHttp.a test

SimpleHttp.o: SimpleHttp.c SimpleHttp.h
	$(CC) $(CFLAGS) SimpleHttp.c -c -o SimpleHttp.o

SimpleHttp.a: SimpleHttp.o
	$(AR) rcs libSimpleHttp.a SimpleHttp.o

test: SimpleHttp.a test.c
	$(CC) test.c libSimpleHttp.a -o test

clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf *~
