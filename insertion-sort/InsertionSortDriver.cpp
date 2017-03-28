#include "LinkedList.h"
#include "InsertionSort.h"
#include "Input.h"
#include "Output.h"
#include <sstream>
#include <fstream>
#include <iostream>

int main() {
	InsertionSortNS::LinkedList* inputList = InsertionSortNS::Input().retrieveData();
	
	InsertionSortNS::LinkedList* sortedList = InsertionSortNS::InsertionSort::sort(*inputList);

	InsertionSortNS::Output().outputData(sortedList);
}