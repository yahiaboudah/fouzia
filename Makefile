
# -- MakeFile --

test: test.o
	g++ test.o -o test -l m

test.o: test.c
	g++ -c test.c

clean:
	rm -f *.o test