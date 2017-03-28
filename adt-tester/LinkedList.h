#ifndef GUARD_LINKEDLIST_IS_H
#define GUARD_LINKEDLIST_IS_H
#include "Node.cpp"
#include <cstdlib>
#include <cstddef>

namespace LinkedListNS {
	class LinkedList {
	private:
		LinkedListNS::Node* head;
		LinkedListNS::Node* tail;
		std::size_t length;
	public:
		void push_back(LinkedListNS::NodeData data);
		void insert(int index, LinkedListNS::NodeData data);
		LinkedListNS::NodeData remove(int index);
		LinkedListNS::NodeData get(int index);
		void clear();
		int size();
		LinkedList();
		~LinkedList();
		void merge(LinkedListNS::LinkedList* other);
	};
}

#endif
