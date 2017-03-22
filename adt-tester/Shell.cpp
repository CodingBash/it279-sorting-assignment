#include<vectors>
#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
#include"InsertionSort.h"
using namespace std;

void stringToIntVector(string);
int determineGapSequence();
void insertionSort(int);
vector<int> dataList;


int main()
{
  string sequence;
  while(dataList.empty())
    {
      cout<<"Enter number sequence to be shell sorted:";
      cin>>sequence;
      stringToIntVector(sequence);
    }
  largestGapSequence = determineGapSequence();
  for(int i=largestGapSequence; i>0;i--)
    {
      insertionSort( (int)pow(2,i)-1);
    }
  return 0;
}




int determineGapSequence()
{
  for(int i=1; i<=dataList.size(); i++)
    {
      int possibleValue= pow(2,i)-1; //(2^i)-1 From Hibbard's recommended increments
      if(possibleValue > dataList.size())
	      return (i-1);
    }
  return 0;//if dataList is empty
}

void stringToIntVector(string sequence)
{
  int returnable=0;
  for(int i = 0; i<static_cast<int>(sequence.size());++i)
    {
      size_t pos = sequence.find(" ");
      if(sequence.find(" ")!= string::npos)
	      {
	        stringstream convert(sequence);
      	  if( (convert >> returnable))
	          {
	            dataList.push_back(returnable);
	          }		
	      }
      else if(sequence.size() != 0)
	      {
	        stringstream convert(sequence);
	        if( (convert >> returnable))
	          {
	            dataList.push_back(returnable);
	          }
	        return;
	      }
    }
}


void insertionSort(int sortSize)
{
  InsertionSort sorter;
  vector<int> temp;
  for(int i=0; i<dataList.size()+sortSize;)
    {
      for(int j=0; j<sortSize;j++)
	    {
	      if(data.at(j+i))
	        temp.push_back(dataList.at(j+i));
	      else
	        break;
	    }
      sorter.add(temp);
      temp = sorter.sort();
      for(int j=0; j<temp.size(); j++)
      {
        if(data.at(j+i))
          data.at(j+i)=temp.at(j);
	      else
	        break;
	    }
      i+=sortSize;
    }  
}
