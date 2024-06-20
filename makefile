all: main test

# Include user header files if needed
main: main.o
	gcc -o main main.o

main.o: main.c
	gcc -c main.c

test: test.o test_lib.o
	gcc -o test test.o test_lib.o

# Include user header files if needed
test.o: test.c test.h test_lib.h
	gcc -c test.c

test_lib.o: test_lib.c test_lib.h
	gcc -c test_lib.c

# Add rules for user files here

clean:
	rm $(wildcard *.o)

cleanall:
	rm main test $(wildcard *.o)

