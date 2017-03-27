#ifndef GUARD_INSERTIONSORT_H
#define GUARD_INSERTIONSORT_H
#include "../adt-tester/LinkedList.h"

namespace Sort {
	class InsertionSort {
	public:
		static LinkedListNS::LinkedList* sort(LinkedListNS::LinkedList& unsortedList);
	};
}

#endif