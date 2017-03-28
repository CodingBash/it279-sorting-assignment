#include "Input.h"

InsertionSortNS::LinkedList * ShellSortNS::Input::retrieveData()
{
	InsertionSortNS::LinkedList* inputList = new InsertionSortNS::LinkedList();
	
	//keep track of file names
	std::string fileNameIn;
	std::string sequence;
	//get the name of the file from the user, open the file they requested.
	std::ifstream fileIn;
	std::cout << "Enter the name of the input file: " << std::endl;
	std::cin >> fileNameIn;
	fileIn.open(fileNameIn);
	std::ifstream dataInputForSorting(fileNameIn);
	if (dataInputForSorting.is_open())
	{
		while (!dataInputForSorting.eof())
		{
			std::getline(dataInputForSorting, sequence);
			inputList->push_back(addStringToLinkedList(sequence));
		}
	}
	else
	{
		std::cout << "Unable to open \"" << fileNameIn << "\"" << std::endl;
	}
	return inputList;
}

/**
*Converts a string input into a long and adds it to the LinkedList named dataList
*
*/
InsertionSortNS::NodeData ShellSortNS::Input::addStringToLinkedList(std::string sequence)
{
	int storable = 0;
	if (sequence.size() != 0)
	{
		std::stringstream convert(sequence);
		if (!(convert >> storable));
		else
		{
			InsertionSortNS::NodeData temp;
			temp.number = storable;
			//std::cout << temp.number << std::endl;
			return temp;
		}
	}
}