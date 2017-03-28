CC=g++
CFLAGS=-std=c++11 -g -Wall

all: main

main: Node.o Merge_Sort.o Input.o Output.o LinkedList.o
	${CC} ${CFLAGS} -o main Node.o Merge_Sort.o Input.o Output.o LinkedList.o

Node.o: Node.cpp Node.h
	${CC} ${CFLAGS} -c Node.cpp

Merge_Sort.o: Merge_Sort.cpp
	${CC} ${CFLAGS} -c Merge_Sort.cpp

Input.o: Input.cpp Input.h
	${CC} ${CFLAGS} -c Input.cpp

Output.o: Output.cpp Output.h
	${CC} ${CFLAGS} -c Output.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	${CC} ${CFLAGS} -c LinkedList.cpp

clean:
	rm -f *.o *.out main

run: clean main
	./main
