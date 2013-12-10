CC = gcc
CFLAGS = -Wall -Werror -O2

all: SimpleHttp.a example

SimpleHttp.o: SimpleHttp.c SimpleHttp.h
	$(CC) $(CFLAGS) SimpleHttp.c -c -o SimpleHttp.o

SimpleHttp.a: SimpleHttp.o
	$(AR) rcs libSimpleHttp.a SimpleHttp.o

example: SimpleHttp.a example.c
	$(CC) example.c libSimpleHttp.a -o example

clean:
	rm -rf example
	rm -rf *.o
	rm -rf *.a
	rm -rf *~
