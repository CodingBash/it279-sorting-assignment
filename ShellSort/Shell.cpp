#include "Shell.h"
using namespace std;


LinkedListNS::LinkedList* ShellSort::Shell::sort(LinkedListNS::LinkedList*inputList)
{
  LinkedListNS::LinkedList* listToSort=new LinkedListNS::LinkedList();
  int largestGapSequence=0;
  for(int i=0; i<inputList->size(); i++)
    {
      listToSort->push_back(inputList->get(i));
    }
  for(int i=1; i<=listToSort->size();i++)
    {
      int possibleValue = pow(2,i)-1;//(2^i)-1 From Hibbard's recommended increments
      if(possibleValue>listToSort->size())
	{
	  largestGapSequence = i-1;
	  break;
	}
    }
  //if largestGapSequence equals Zero, then list is empty
  for(int i= largestGapSequence; i>0;i--)
    {
      listToSort=insertionSort(listToSort,(int)pow(2,i)-1);
    }
  return listToSort;
}


LinkedListNS::LinkedList* ShellSort::Shell::insertionSort(LinkedListNS::LinkedList *listToSort,int sortSize)
{
  for(int i=0; i<listToSort->size()+sortSize;)
    {
      LinkedListNS::LinkedList temp;
      for(int j=i; j<sortSize;j++)
	{
	  if((j+i)<temp.size())
	    temp.push_back(listToSort->get(j+i));
	  else
	    break;
	}
      temp = *Sort::InsertionSort::sort(temp);
      for(int j=0; j<temp.size(); j++)
	{
	  if((j+i)<temp.size())
	    listToSort->insert(j+i,temp.get(j));
	  else
	    break;
	}
      temp.clear();
      i+=sortSize;
    }  
  return listToSort;
}
