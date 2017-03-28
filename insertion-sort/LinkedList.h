#ifndef GUARD_LINKEDLIST_IS_H
#define GUARD_LINKEDLIST_IS_H
#include "Node.cpp"
#include <cstdlib>
#include <cstddef>

namespace InsertionSortNS {
	class LinkedList {
	private:
		InsertionSortNS::Node* head;
		InsertionSortNS::Node* tail;
		std::size_t length;
	public:
		void push_back(InsertionSortNS::NodeData data);
		void insert(int index, InsertionSortNS::NodeData data);
		InsertionSortNS::NodeData remove(int index);
		InsertionSortNS::NodeData get(int index);
		void clear();
		int size();
		LinkedList();
		~LinkedList();
		void merge(InsertionSortNS::LinkedList* other);
	};
}

#endif
