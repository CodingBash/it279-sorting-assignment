#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "LinkedList.h"
using namespace std;

/* Node struct used for linked list implementation */

int main()
{
	MergeSortNS::LinkedList* list = new MergeSortNS::LinkedList();

	//keep track of file names
	string fileNameIn;
	string fileNameOut;

	//get the name of the file from the user, open the file they requested.
   	ifstream fileIn;
	cout << "Enter the name of the input file: " << endl;
	cin >> fileNameIn;
	fileIn.open(fileNameIn);
	if(!(fileIn.is_open()))
	{
		cout << "This file was unable to be opened." <<endl;
		return 1;
	}
	
	//used to read in all of the numbers in the txt file.
	long nums;
	MergeSortNS::Node* a = NULL;
	
	// Read all values into the linked list.
	while(fileIn >> nums)
	{
		list->push(&a, nums);
	}
	
	//close the input file.
	fileIn.close();
	
	//use merge sort technique to sort the newly created linked list.
	list->mergeSort(&a);
	
	cout << "Enter the name of the OUTPUT file: " << endl;
	cin >> fileNameOut;
	ofstream fileOut;
	fileOut.open(fileNameOut);
	
	MergeSortNS::Node* node = a;
	
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




