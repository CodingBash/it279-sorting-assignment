#include "InsertionSort.h"

InsertionSortNS::LinkedList* InsertionSortNS::InsertionSort::sort(InsertionSortNS::LinkedList& unsortedList)
{
	/*
		Copy unsorted list to sorted list
		NOTE: Initiated LinkedList as pointer to prevent automatic destructor call at end of scope.
	*/
	InsertionSortNS::LinkedList* newList = new InsertionSortNS::LinkedList();
	for (int i = 0; i < unsortedList.size(); i++) {
		newList->push_back(unsortedList.get(i));
	}

	/*
		Actual algorithm implementation
	*/
	int j;
	InsertionSortNS::NodeData temp;
	for (int i = 1; i < newList->size(); i++) {
		j = i;
		while (j > 0 && newList->get(j - 1).number > newList->get(j).number) {
			// Save temp
			temp = newList->remove(j);
			
			// Set list[j]
			newList->insert(j, newList->get(j - 1));
			
			// Set list[j-1] = temp
			newList->remove(j - 1);
			newList->insert(j - 1, temp);
			j--;
		}
	}
	return newList;
}
