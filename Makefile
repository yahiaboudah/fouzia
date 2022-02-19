
# -- MakeFile --

.PHONY: clean

test: test.o
	g++ test.o -o test -l m
	
test.o: src/test.c
	g++ -c src/test.c

clean:
	del /f /q *.o *.exe