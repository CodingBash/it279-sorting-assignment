#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

/* Node struct used for linked list implementation */

struct node
{
    	long data;
	struct node* next;
};

 
struct node* mergeLists(node* a, node* b);
void splitList(node* source, node** frontNode, node** backNode);
 
/* sorts through the linked list */

void mergeSort(struct node** headRef)
{
/* In this method only pointers are changed not the actually data of the node */
	node* head = *headRef;
    	node* a;
    	node* b;
    	if ((head == NULL) || (head->next == NULL))
    	{
       		return;
    	}
    	
    	splitList(head, &a, &b);
    	mergeSort(&a);
    	mergeSort(&b);
    	*headRef = mergeLists(a, b);
}
/* merge the sorted linked lists */
node* mergeLists(struct node* a, struct node* b)
{
    node* result = NULL;
    if (a == NULL)
        return b;
    else if (b==NULL)
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
 
/* Split the nodes of the given list into front and back halves*/
void splitList(node* origin, node** frontNode, node** backNode)
{
    node* top;
    node* bottom;
    if (origin==NULL || origin->next==NULL)
    {
        *frontNode = origin;
        *backNode = NULL;
    }
    else
    {
        bottom = origin;
        top = origin->next;
        while (top != NULL)
        {
            top = top->next;
            if (top != NULL)
            {
                bottom = bottom->next;
                top = top->next;
            }
        }
        *frontNode = origin;
        *backNode = bottom->next;
        bottom->next = NULL;
    }
}
 
 
/* push nodes into the list */
void push(node** headNodeRef, long new_data)
{
    node *new_node = new node;
    new_node->data = new_data;
    new_node->next = (*headNodeRef);
    (*headNodeRef)    = new_node;
}


int main()
{
	//keep track of file names
	string fileNameIn;
	string fileNameOut;

	//get the name of the file from the user, open the file they requested.
   	ifstream fileIn;
	cout << "Enter the name of the input file: " << endl;
	cin >> fileNameIn;
	fileIn.open(fileNameIn);
	if(!(fileIn.is_open()))
	{
		cout << "This file was unable to be opened." <<endl;
		return 1;
	}
	
	//used to read in all of the numbers in the txt file.
	long nums;
	node* a = NULL;
	
	// Read all values into the linked list.
	while(fileIn >> nums)
	{
		push(&a, nums);
	}
	
	//close the input file.
	fileIn.close();
	
	//use merge sort technique to sort the newly created linked list.
	mergeSort(&a);
	
	cout << "Enter the name of the OUTPUT file: " << endl;
	cin >> fileNameOut;
	ofstream fileOut;
	fileOut.open(fileNameOut);
	
	node *node = a;
	
	/*go through every node in the list and print its data. The nodes should
		be sorted from least to greatest according to their data value */
	while(node!= NULL)
	{
		fileOut << node->data << endl;
		node = node->next;
	}

	//close the file after writing to it.
	fileOut.close();
	
	return 0;
}




