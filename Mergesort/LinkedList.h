#ifndef GUARD_LINKEDLIST_MS_H
#define GUARD_LINKEDLIST_MS_H
#include "Node.h"

namespace MergeSortNS {
	class LinkedList {
	public:
		MergeSortNS::Node* mergeLists(MergeSortNS::Node* a, MergeSortNS::Node* b);
		void splitList(MergeSortNS::Node* source, MergeSortNS::Node** frontNode, MergeSortNS::Node** backNode);
		void mergeSort(MergeSortNS::Node** headRef);
		void push(MergeSortNS::Node** headNodeRef, long new_data);
	};
}
#endif