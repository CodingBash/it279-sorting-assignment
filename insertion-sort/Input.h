#ifndef GUARD_INPUT_IS_H
#define GUARD_INPUT__IS_H
#include "../adt-tester/LinkedList.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <cstdio>
#include <cstdlib>
#include <sstream>

namespace MergeSortNS {
	class Input {
	public:
		LinkedListNS::LinkedList* retrieveData();
	private:
		LinkedListNS::NodeData addStringToLinkedList(std::string sequence);
	};
}

#endif