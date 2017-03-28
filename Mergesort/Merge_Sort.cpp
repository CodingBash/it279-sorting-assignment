#include <iostream>
#include <fstream>
#include <istream>
#include "LinkedList.h"
#include "Input.h"
#include "Output.h"

using namespace std;

/* Node struct used for linked list implementation */

int main()
{
	MergeSortNS::LinkedList* list = MergeSortNS::Input().retrieveData();
	
	if (list != NULL) {
		//use merge sort technique to sort the newly created linked list.
		list->mergeSort(&list->a);

		MergeSortNS::Output().outputData(list);
	}
	return 0;
}




