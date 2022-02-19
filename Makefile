
# -- MakeFile --

test: test.o
	g++ test.o -o test -l m
	
test.o: src/test.cpp
	g++ -c src/test.cpp

clean:
	del /f /q *.o *.exe