
# -- MakeFile --

.PHONY: clean

build/exe/test: test.o
	g++ test.o -o build/test -l m
	
test.o: src/test.c
	g++ -c src/test.c

clean:
	rm -f *.o