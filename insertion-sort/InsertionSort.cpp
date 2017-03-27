#include "InsertionSort.h"

LinkedListNS::LinkedList Sort::InsertionSort::sort(LinkedListNS::LinkedList unsortedList)
{
	int i, j;
	LinkedListNS::NodeData temp;
	for (i = 1; i < unsortedList.size(); i++) {
		j = 1;
		while (j > 0 && unsortedList.get(j - 1).number > unsortedList.get(j).number) {
			// Save temp
			temp = unsortedList.remove(j);
			
			// Set list[j]
			unsortedList.insert(j, unsortedList.get(j - 1));
			
			// Set list[j-1] = temp
			unsortedList.remove(j - 1);
			unsortedList.insert(j - 1, temp);
			j--;
		}
	}
	// Actually returning "sortedList"
	return unsortedList;
}
