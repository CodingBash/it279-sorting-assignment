#include "Output.h"

void MergeSortNS::Output::outputData(MergeSortNS::LinkedList * list)
{
	std::string fileNameOut;
	std::cout << "Enter the name of the OUTPUT file: " << std::endl;
	std::cin >> fileNameOut;
	std::ofstream fileOut;
	fileOut.open(fileNameOut);

	MergeSortNS::Node* node = list->a;

	/*go through every node in the list and print its data. The nodes should
	be sorted from least to greatest according to their data value */
	while (node != NULL)
	{
		fileOut << node->data << std::endl;
		node = node->next;
	}

	//close the file after writing to it.
	fileOut.close();
}
