all: main test

# Include user header files if needed
main: main.o lib.o parse.o
	gcc -o main main.o lib.o parse.o

main.o: main.c
	gcc -c main.c

test: test.o test_lib.o lib.o parse.o
	gcc -o test test.o test_lib.o lib.o parse.o

# Include user header files if needed
test.o: test.c test.h test_lib.h
	gcc -c test.c

test_lib.o: test_lib.c test_lib.h
	gcc -c test_lib.c

# Add rules for user files here
lib.o: lib.c lib.h
	gcc -c lib.c

parse.o: parse.c parse.h lib.h
	gcc -c parse.c

clean:
	rm $(wildcard *.o)

cleanall:
	rm main test $(wildcard *.o)

