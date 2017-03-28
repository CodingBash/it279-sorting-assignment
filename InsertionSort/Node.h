#ifndef GUARD_NODE_IS_H
#define GUARD_NODE_IS_H
#include "NodeData.h"

namespace InsertionSortNS {
	class Node {
	private:
		NodeData data;
		Node* next;
	public:
		NodeData getData();
		void setData(NodeData data);
		Node*& getNext();
		void setNext(Node* next);
		Node(NodeData data);
	};
}


#endif
