#include "LinkedList.h"
#include <cstdio>
#include <cstdlib>

MergeSortNS::Node* MergeSortNS::LinkedList::mergeLists(MergeSortNS::Node * a, MergeSortNS::Node * b)
{
	MergeSortNS::Node* result = NULL;
	if (a == NULL)
		return b;
	else if (b == NULL)
		return a;
	if (a->data <= b->data)
	{
		result = a;
		result->next = mergeLists(a->next, b);
	}
	else
	{
		result = b;
		result->next = mergeLists(a, b->next);
	}
	return result;
}

void MergeSortNS::LinkedList::splitList(MergeSortNS::Node * source, MergeSortNS::Node ** frontNode, MergeSortNS::Node ** backNode)
{
	MergeSortNS::Node* top;
	MergeSortNS::Node* bottom;
	if (source == NULL || source->next == NULL)
	{
		*frontNode = source;
		*backNode = NULL;
	}
	else
	{
		bottom = source;
		top = source->next;
		while (top != NULL)
		{
			top = top->next;
			if (top != NULL)
			{
				bottom = bottom->next;
				top = top->next;
			}
		}
		*frontNode = source;
		*backNode = bottom->next;
		bottom->next = NULL;
	}
}

void MergeSortNS::LinkedList::mergeSort(MergeSortNS::Node ** headRef)
{
	/* In this method only pointers are changed not the actually data of the node */
	MergeSortNS::Node* head = *headRef;
	MergeSortNS::Node* a;
	MergeSortNS::Node* b;
	if ((head == NULL) || (head->next == NULL))
	{
		return;
	}

	splitList(head, &a, &b);
	mergeSort(&a);
	mergeSort(&b);
	*headRef = mergeLists(a, b);
}

void MergeSortNS::LinkedList::push(MergeSortNS::Node ** headNodeRef, long new_data)
{
	MergeSortNS::Node *new_node = new MergeSortNS::Node;
	new_node->data = new_data;
	new_node->next = (*headNodeRef);
	(*headNodeRef) = new_node;
}
