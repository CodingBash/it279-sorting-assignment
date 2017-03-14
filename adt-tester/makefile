CC=g++
CFLAGS=-std=c++11 -g -Wall

all: main

main: Node.o AdtTester.o LinkedList.o
	${CC} ${CFLAGS} -o main Node.o AdtTester.o LinkedList.o

Node.o: Node.cpp Node.h
	${CC} ${CFLAGS} -c Node.cpp

AdtTester.o: AdtTester.cpp
	${CC} ${CFLAGS} -c AdtTester.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	${CC} ${CFLAGS} -c LinkedList.cpp

clean:
	rm -f *.o *.out main

run: clean main
	./main
