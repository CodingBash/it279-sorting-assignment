CC=g++
CFLAGS=-std=c++11 -g -Wall

all: mergesort

mergesort: Merge_Sort.o 
	${CC} ${CFLAGS} -o mergesort Merge_Sort.o


Merge_Sort.o: Merge_Sort.cpp
	${CC} ${CFLAGS} -c Merge_Sort.cpp

clean:
	rm -f *.o *.out mergesort

run: clean mergesort
	./mergesort
