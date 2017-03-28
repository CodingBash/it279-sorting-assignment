#include "../adt-tester/LinkedList.h"
#include "InsertionSort.h"
#include "Input.h"
#include "Output.h"
#include <sstream>
#include <fstream>
#include <iostream>

int main() {
	LinkedListNS::LinkedList* inputList = MergeSortNS::Input().retrieveData();
	
	LinkedListNS::LinkedList* sortedList = Sort::InsertionSort::sort(*inputList);

	InsertionSortNS::Output().outputData(sortedList);
}