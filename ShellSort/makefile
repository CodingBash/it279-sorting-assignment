CC=g++
CFLAGS=-std=c++11 -g -Wall

all: main

main: Node.o NodeData.o InsertionSort.o ShellSort.o ShellSortDriver.o Input.o Output.o LinkedList.o
	${CC} ${CFLAGS} -o main Node.o NodeData.o InsertionSort.o ShellSort.o ShellSortDriver.o Input.o Output.o LinkedList.o

Node.o: Node.cpp Node.h
	${CC} ${CFLAGS} -c Node.cpp

NodeData.o: NodeData.cpp NodeData.h
	${CC} ${CFLAGS} -c NodeData.cpp

InsertionSort.o: InsertionSort.cpp InsertionSort.h
	${CC} ${CFLAGS} -c InsertionSort.cpp

ShellSort.o: ShellSort.cpp ShellSort.h
	${CC} ${CFLAGS} -c ShellSort.cpp

ShellSortDriver.o: ShellSortDriver.cpp
	${CC} ${CFLAGS} -c ShellSortDriver.cpp

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
