#include<string>
#include<sstream>
#include<fstream>
#include"Shell.cpp"

using namespace std;

LinkedListNS::NodeData addStringToLinkedList(string);
void print(string);
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
 * Takes the stored LinkedList and writes each element to a file
 *
 */
void print(string outputFilename)
{
  ofstream outputFile(outputFilename);
  if(outputFile.is_open())
    {
     for(int i=1; i<=dataList->size()-1;i++)
       {
	 outputFile<< dataList->get(i).number<<'\n';
       }
     outputFile.close();
    }
    else
      cout<< "Unable to open file"; 
}
