#ifndef GUARD_NODEQUEUE_H
#define GUARD_NODEQUEUE_H
#include <string>

namespace LinkedListNS {
	struct NodeData {
	public:
		std::string name;
	};

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
