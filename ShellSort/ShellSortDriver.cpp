#include<string>
#include<sstream>
#include<fstream>
#include<stdio.h>
#include"LinkedList.cpp"
#include "ShellSort.h"
#include "Input.h"
#include "Output.h"
using namespace std;

int main()
{
	InsertionSortNS::LinkedList* inputList = ShellSortNS::Input().retrieveData();
	InsertionSortNS::LinkedList *sortedList = ShellSortNS::ShellSort::sort(inputList);
	ShellSortNS::Output().outputData(sortedList);
	return 0;
}
