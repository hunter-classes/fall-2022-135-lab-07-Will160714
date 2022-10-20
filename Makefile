main: main.o funcs.o
	g++ -o main main.o funcs.o

test: test.o funcs.o
	g++ -o test test.o funcs.o

test2: test2.o funcs.o
	g++ -o test2 test2.o funcs.o

main.o: main.cpp funcs.h

test.o: test.cpp funcs.h

test2.o: test2.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main.o test.o test2.o funcs.o