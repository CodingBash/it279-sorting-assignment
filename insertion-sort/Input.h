#ifndef GUARD_INPUT_IS_H
#define GUARD_INPUT__IS_H
#include "LinkedList.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <cstdio>
#include <cstdlib>
#include <sstream>

namespace InsertionSortNS {
	class Input {
	public:
		InsertionSortNS::LinkedList* retrieveData();
	private:
		InsertionSortNS::NodeData addStringToLinkedList(std::string sequence);
	};
}

#endif