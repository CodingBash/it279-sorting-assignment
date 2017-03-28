#include <iostream>
#include <fstream>
#include <istream>
#include "LinkedList.h"
#include "Input.h"

using namespace std;

/* Node struct used for linked list implementation */

int main()
{
	MergeSortNS::LinkedList* list = Input().retrieveData();
	
	//use merge sort technique to sort the newly created linked list.
	list->mergeSort(&list->a);
	
	string fileNameOut;
	cout << "Enter the name of the OUTPUT file: " << endl;
	cin >> fileNameOut;
	ofstream fileOut;
	fileOut.open(fileNameOut);
	
	MergeSortNS::Node* node = list->a;
	
	/*go through every node in the list and print its data. The nodes should
		be sorted from least to greatest according to their data value */
	while(node!= NULL)
	{
		fileOut << node->data << endl;
		node = node->next;
	}

	//close the file after writing to it.
	fileOut.close();
	
	return 0;
}




