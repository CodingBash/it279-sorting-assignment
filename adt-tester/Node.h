#ifndef GUARD_NODEQUEUE_H
#define GUARD_NODEQUEUE_H

namespace LinkedListNS {
	struct NodeData {
	public:
		int number;
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
