#include "Node.h"

InsertionSortNS::Node::Node(InsertionSortNS::NodeData data) {
	this->data = data;
}

InsertionSortNS::NodeData InsertionSortNS::Node::getData() {
	return this->data;
}

InsertionSortNS::Node*& InsertionSortNS::Node::getNext() {
	return this->next;
}

void InsertionSortNS::Node::setData(InsertionSortNS::NodeData data) {
	this->data = data;
}

void InsertionSortNS::Node::setNext(InsertionSortNS::Node* next) {
	this->next = next;
}