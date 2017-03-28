#include "../adt-tester/LinkedList.h"
#include "InsertionSort.h"
#include<sstream>
#include<fstream>
#include <iostream>

LinkedListNS::NodeData addStringToLinkedList(std::string);
LinkedListNS::LinkedList* getData();

int main() {
	LinkedListNS::LinkedList* inputList = getData();
	
	LinkedListNS::LinkedList* sortedList = Sort::InsertionSort::sort(*inputList);

	for (int i = 0; i < sortedList->size(); i++) {
		std::cout << sortedList->get(i).number << std::endl;
	}

	std::system("PAUSE");

}

LinkedListNS::LinkedList* getData() {
	LinkedListNS::LinkedList* inputList = new LinkedListNS::LinkedList();

	std::string sequence;
	std::string filename = "C:\\Users\\bbece\\Documents\\Git-Projects\\Git-School-Projects\\IT279\\sorting-assignment\\insertion-sort\\testingData1.txt";
	std::ifstream dataInputForSorting(filename);
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
		std::cout << "Unable to open \"" << filename << "\"" << std::endl;
	}
	return inputList;
}

/**
*Converts a string input into a long and adds it to the LinkedList named dataList
*
*/
LinkedListNS::NodeData addStringToLinkedList(std::string sequence)
{
	int storable = 0;
	if (sequence.size() != 0)
	{
		std::stringstream convert(sequence);
		if (!(convert >> storable));
		else
		{
			LinkedListNS::NodeData temp;
			temp.number = storable;
			//std::cout << temp.number << std::endl;
			return temp;
		}
	}
}