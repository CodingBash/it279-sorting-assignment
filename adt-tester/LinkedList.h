#ifndef GUARD_QUEUE_H
#define GUARD_QUEUE_H
#include "Node.h"
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
		void clear();
		int size();
		LinkedList();
		~LinkedList();
	};
}

#endif
