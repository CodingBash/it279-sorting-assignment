#include "Input.h"

MergeSortNS::LinkedList * MergeSortNS::Input::retrieveData()
{
	MergeSortNS::LinkedList* list = new MergeSortNS::LinkedList();
	
	//keep track of file names
	std::string fileNameIn;

	//get the name of the file from the user, open the file they requested.
	std::ifstream fileIn;
	std::cout << "Enter the name of the input file: " << std::endl;
	std::cin >> fileNameIn;
	fileIn.open(fileNameIn);
	if (!(fileIn.is_open()))
	{
		std::cout << "This file was unable to be opened." << std::endl;
		return NULL;
	}

	//used to read in all of the numbers in the txt file.
	long nums;
	list->a = NULL;

	// Read all values into the linked list.
	while (fileIn >> nums)
	{
		list->push(&list->a, nums);
	}

	//close the input file.
	fileIn.close();

	return list;
}
