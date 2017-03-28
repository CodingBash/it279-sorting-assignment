#include "Output.h"

void InsertionSortNS::Output::outputData(InsertionSortNS::LinkedList * list)
{
	std::string fileNameOut;
	std::cout << "Enter the name of the OUTPUT file: " << std::endl;
	std::cin >> fileNameOut;
	std::ofstream fileOut;
	fileOut.open(fileNameOut);

	for (int i = 0; i < list->size(); i++) {
		fileOut << list->get(i).number << std::endl;
	}

	//close the file after writing to it.
	fileOut.close();
}
