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

void LinkedListNS::LinkedList::push_back(LinkedListNS::NodeData data) {
	if (!this->head) {
		LinkedListNS::Node* newNode = new LinkedListNS::Node(data);
		this->head = newNode;
		this->tail = newNode;
		head->setNext(0);
		tail->setNext(0);
	}
	else {
		LinkedListNS::Node* newNode = new LinkedListNS::Node(data);
		tail->setNext(newNode);
		tail = newNode;
	}
	++length;
}

void LinkedListNS::LinkedList::insert(int index, LinkedListNS::NodeData data) {
	if (this->size() < index || index < 0) {
		throw std::out_of_range("Index out of bounds");
	}
	else {
		LinkedListNS::Node* newNode = new LinkedListNS::Node(data);
		int counter = 0;
		LinkedListNS::Node* current = head;
		LinkedListNS::Node* previous = NULL;
		while (counter != index) {
			previous = current;
			current = current->getNext();
			counter++;
		}

		// Inserting to HEAD
		if (!previous) {
			newNode->setNext(current);
			head = newNode;
			if (!head->getNext()) {
				tail = head;
			}
		} else if (!current) { // INSERTING TAIL
			previous->setNext(newNode);
			tail = newNode;
		}
		else { // Inserting MIDDLE
			previous->setNext(newNode);
			newNode->setNext(current);
		}
		++length;
	}
}
LinkedListNS::NodeData LinkedListNS::LinkedList::remove(int index) {
	// TODO: Test ArrayOutOfBounds
	if (this->size() <= index || index < 0) {
		throw std::out_of_range("Index out of bounds");
	} else {
		int counter = 0;
		LinkedListNS::Node* current = head;
		LinkedListNS::Node* previous = NULL;
		while (counter != index) {
			previous = current;
			current = current->getNext();
			counter++;
		}
		LinkedListNS::NodeData data = current->getData();
		
		if (!previous) { // Deleting HEAD
			// TODO: Will this work in a one element list?
			head = current->getNext();
			if (!current->getNext()) {
				tail = head;
			}
			delete current;
			current = NULL;
		}
		else if (!current->getNext()) { // Deleting TAIL
			previous->setNext(0);
			tail = previous;
			delete current;
			current = NULL;
		}
		else { // Deleting middle
			previous->setNext(current->getNext());
			delete current;
			current = NULL;
		}
		--length;
		return data;
	}
}

LinkedListNS::NodeData LinkedListNS::LinkedList::get(int index) {
	// TODO: Test ArrayOutOfBounds
	if (this->size() <= index || index < 0) {
		throw std::out_of_range("Index out of bounds");
	}
	else {
		int counter = 0;
		LinkedListNS::Node* current = head;
		while (current->getNext() && counter != index) {
			current = current->getNext();
			counter++;
		}
		return current->getData();
	}
}

int LinkedListNS::LinkedList::size() {
	return static_cast<int>(this->length);
}

// TODO: Does this work as expected?
void LinkedListNS::LinkedList::clear() {
	this->~LinkedList();
}


void LinkedListNS::LinkedList::merge(LinkedListNS::LinkedList* other)
{
  for(int i=0; other->size()!=0;i++)
    {
      this->push_back(other->remove(0));
    }
}
