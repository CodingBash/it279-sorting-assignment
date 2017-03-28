#include "Node.h"

inline InsertionSortNS::Node::Node(InsertionSortNS::NodeData data) {
	this->data = data;
}

inline InsertionSortNS::NodeData InsertionSortNS::Node::getData() {
	return this->data;
}

inline InsertionSortNS::Node*& InsertionSortNS::Node::getNext() {
	return this->next;
}

inline void InsertionSortNS::Node::setData(InsertionSortNS::NodeData data) {
	this->data = data;
}

inline void InsertionSortNS::Node::setNext(InsertionSortNS::Node* next) {
	this->next = next;
}