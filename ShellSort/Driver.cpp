#include"../adt-tester/LinkedList.cpp"
#include<string>
#include<sstream>
#include<fstream>
#include<stdio.h>
#include"Shell.cpp"


using namespace std;

LinkedListNS::NodeData addStringToLinkedList(string);
void print(char *outputFile, LinkedListNS::LinkedList *dataList);



int main()
{
  LinkedListNS::LinkedList *dataList = new LinkedListNS::LinkedList();
  string sequence;
  char filename[20];
  char outputFilename[20];
  cout <<"Enter Filename: ";
  cin >>filename;
  cout << "Enter Output Filename: ";
  cin >>outputFilename;
  ifstream dataInputForSorting (filename);
  if(dataInputForSorting.is_open())
    {
      cout<<"\""<<filename<< "\" is open\n";
      while(!(dataInputForSorting.eof()))
	{
	  getline(dataInputForSorting, sequence);
	  LinkedListNS::NodeData temp =addStringToLinkedList(sequence);
	  if(temp.number!=0l)
	    dataList->push_back(temp );
	}
     
      dataInputForSorting.close();
      cout<<"\""<<filename<<"\" has been closed\n";
                //For ShellSort
      LinkedListNS::LinkedList *sortedList = ShellSort::Shell::sort(dataList);
      print(outputFilename, sortedList);
      sortedList->clear();
    }
  else 
    {
      cout<< "Unable to open \"" << filename << "\"\n";
    }
  return 0;
}

/**
 *Converts a string input into a long and adds it to the LinkedList named dataList
 **/
LinkedListNS::NodeData addStringToLinkedList(string sequence)
{
  int storable = 0;
  if (sequence.size() != 0)
    {
      stringstream convert(sequence);
      if (!(convert >> storable));
      else
	{
	  LinkedListNS::NodeData temp;
	  temp.number = storable;
	  return temp;
	}
    }
  LinkedListNS::NodeData temp;
  temp.number = 0l;
  return temp;
}

/**
 * Takes an incoming LinkedList and prints each element to the console
 *
 */
void print(char* outputFile, LinkedListNS::LinkedList* dataList)
{
  cout<<"Writing...";
  ofstream outToFile(outputFile,ios::out);
  for(int i=0; i<dataList->size();i++)
    {
      outToFile<<dataList->get(i).number<< '\n';
    }
  cout<<"Complete\n";
  fclose(stdout);
}
