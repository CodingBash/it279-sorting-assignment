#ifndef GUARD_INSERTIONSORT_H
#define GUARD_INSERTIONSORT_H
#include "LinkedList.h"

namespace InsertionSortNS {
	class InsertionSort {
	public:
		static InsertionSortNS::LinkedList* sort(InsertionSortNS::LinkedList& unsortedList);
	};
}

#endif