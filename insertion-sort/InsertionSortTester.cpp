#include "../adt-tester/LinkedList.h"
#include "InsertionSort.h"
#include <iostream>

int main() {
	LinkedListNS::LinkedList list = LinkedListNS::LinkedList();
	auto createData = [](int number) -> LinkedListNS::NodeData {
		LinkedListNS::NodeData data = LinkedListNS::NodeData();
		data.number = number;
		return data;
	};
	list.push_back(createData(4));
	list.push_back(createData(2));
	list.push_back(createData(8));
	list.push_back(createData(6));
	list.push_back(createData(9));
	
	LinkedListNS::LinkedList* sortedList = Sort::InsertionSort::sort(list);

	for (int i = 0; i < sortedList->size(); i++) {
		std::cout << sortedList->get(i).number << std::endl;
	}

	std::system("PAUSE");

}