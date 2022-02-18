
CC=clang
CFLAGS=-Wall -g

all: test

fouzia.o: fouzia.c fouzia.h
	$(CC) $(CFLAGS) -c fouzia.c

test: test.c fouzia.o
	$(CC) $(CFLAGS) -o $@ $^