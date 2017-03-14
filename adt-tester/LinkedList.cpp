#include "LinkedList.h"
#include <stdexcept>

LinkedListNS::LinkedList::LinkedList() {
	this->head = NULL;
	this->tail = NULL;
	this->length = 0;
}

// TODO: Does this properly destroy? Just added the tail pointer
LinkedListNS::LinkedList::~LinkedList() {
	if (this->head) {
		LinkedListNS::Node* current = head;
		LinkedListNS::Node* next = current->getNext();
		delete current;
		while (next) {
			current = next;
			next = current->getNext();
			delete current;
		}
		head = NULL;
		tail = NULL;
		this->length = 0;
	}
}

// TODO: THIS IS WRONG - it pushes to the front
void LinkedListNS::LinkedList::push_back(LinkedListNS::NodeData data) {
	if (!this->head) {
		this->head = new LinkedListNS::Node(data);
		head->setNext(NULL);
	}
	else {
		LinkedListNS::Node* newNode = new LinkedListNS::Node(data);
		newNode->setNext(head);
		head = newNode;
	}
	++length;
}

void LinkedListNS::LinkedList::insert(int index, LinkedListNS::NodeData data) {
	if (this->size() <= index || index <= this->size()) {
		throw std::out_of_range("Index out of bounds");
	}
	else {
		LinkedListNS::Node* newNode = new LinkedListNS::Node(data);
	}
}
LinkedListNS::NodeData LinkedListNS::LinkedList::remove(int index) {
	// TODO: Test ArrayOutOfBounds
	if (this->size() <= index || index <= this->size()) {
		throw std::out_of_range("Index out of bounds");
	} else {
		int counter = 0;
		LinkedListNS::Node* current = head;
		LinkedListNS::Node* previous = NULL;
		while (current->getNext() || counter != index) {
			previous = current;
			current = current->getNext();
			counter++;
		}
		LinkedListNS::NodeData data = current->getData();
		
		if (!previous) { // Deleting HEAD
			// TODO: Will this work in a one element list?
			head = current->getNext();
			delete current;
			current = NULL;
		}
		else if (!current->getNext()) { // Deleting TAIL
			previous->setNext(0);
			delete current;
			current = NULL;
		}
		else {
			previous->setNext(current->getNext());
			delete current;
			current = NULL;
		}
		--length;
		return data;
	}
}

int LinkedListNS::LinkedList::size() {
	return static_cast<int>(this->length);
}