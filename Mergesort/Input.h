#ifndef GUARD_INPUT_H
#define GUARD_INPUT_H
#include "LinkedList.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <cstdio>
#include <cstdlib>

class Input {
public:
	MergeSortNS::LinkedList* retrieveData();
};

#endif