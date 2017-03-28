#include"../adt-tester/LinkedList.cpp"
#include<string>
#include<sstream>
#include<fstream>
#include<stdio.h>
#include"Shell.cpp"
using namespace std;


LinkedListNS::NodeData addStringToLinkedList(string);
void print(char *outputFile);
LinkedListNS::LinkedList *dataList;


int main()
{
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
      while(!dataInputForSorting.eof())
	{
	  getline(dataInputForSorting, sequence);
	  dataList->push_back( addStringToLinkedList(sequence) );
	}
      dataInputForSorting.close();
                //For ShellSort
      dataList = ShellSort::Shell::sort(dataList);
      print(outputFilename);
    }
  else 
    {
      cout<< "Unable to open \"" << filename << "\"";
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
		std::stringstream convert(sequence);
		if (!(convert >> storable));
		else
		{
			LinkedListNS::NodeData temp;
			temp.number = storable;
			return temp;
		}
	}
}

/**
 * Takes an incoming LinkedList and prints each element to the console
 *
 */
void print(char* outputFile)
{
  freopen(outputFile,"a",stdout);
  for(int i=1; i<=dataList->size()-1;i++)
    {
      printf(dataList->get(i).number+"\n");
    }
  fclose(stdout);
}

