#include "Node.h"

LinkedListNS::Node::Node(LinkedListNS::NodeData data) {
	this->data = data;
}

LinkedListNS::NodeData LinkedListNS::Node::getData() {
	return this->data;
}

LinkedListNS::Node*& LinkedListNS::Node::getNext() {
	return this->next;
}

void LinkedListNS::Node::setData(LinkedListNS::NodeData data) {
	this->data = data;
}

void LinkedListNS::Node::setNext(LinkedListNS::Node* next) {
	this->next = next;
}