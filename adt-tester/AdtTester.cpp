#include "LinkedList.h"
#include <iostream>

int main() {
	/*
	* Test Stack
	*/
	LinkedListNS::LinkedList list = LinkedListNS::LinkedList();
	auto createData = [](int number) -> LinkedListNS::NodeData {
		LinkedListNS::NodeData data = LinkedListNS::NodeData();
		data.number = number;
		return data;
	};

	/*
		Test push_back, get, and remove of 100 items
	*/
	for (int i = 0; i < 100; i++) {
		list.push_back(createData(i));
	}
	for (int i = 0; i < list.size(); ++i) {
		std::cout << list.get(i).number << std::endl;
	}
	for (int i = list.size() - 1; i >= 0; --i) {
		std::cout << list.remove(i).number << std::endl;
	}

	/*
		Test push_back, get, and remove of 1 items
	*/
	list.push_back(createData(0));
	for (int i = 0; i < list.size(); ++i) {
		std::cout << list.get(i).number << std::endl;
	}
	for (int i = list.size() - 1; i >= 0; --i) {
		std::cout << list.remove(i).number << std::endl;
	}

	/*
		Test insert, get, and clear of 100 items
	*/
	for (int i = 0; i < 100; i++) {
		list.insert(i, createData(i));
	}
	for (int i = 0; i < list.size(); ++i) {
		std::cout << list.get(i).number << std::endl;
	}
	list.clear();

	/*
		Test insert, get, and clear of 1 item
	*/
	list.insert(0, createData(0));
	for (int i = 0; i < list.size(); ++i) {
		std::cout << list.get(i).number << std::endl;
	}
	list.clear();

	/*
		Test destructor of 100 items
	*/
	for (int i = 0; i < 100; i++) {
		list.insert(i, createData(i));
	}
	list.~LinkedList();

	/*
		Test destructor of 1 item
	*/
	list = LinkedListNS::LinkedList();
	list.push_back(createData(1));
	list.~LinkedList();

	/*
		Test destructor of 0 items
	*/
	list = LinkedListNS::LinkedList();
	list.~LinkedList();
	system("PAUSE");
}
