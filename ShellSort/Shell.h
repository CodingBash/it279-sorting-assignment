#ifndef SHELL_H
#define SHELL_H

#include<iostream>
#include<string>
#include<cmath>
#include <cstdlib>
#include"InsertionSort.cpp"
using namespace std;


namespace ShellSort{
  class Shell
  {
  public:
    static LinkedListNS::LinkedList* sort(LinkedListNS::LinkedList *inputList);
  private:
    static LinkedListNS::LinkedList* insertionSort(LinkedListNS::LinkedList *listToSort, int sorterSize);
    static LinkedListNS::LinkedList* subList(LinkedListNS::LinkedList *listToSort, int sorterSize, int start);
    static LinkedListNS::LinkedList* columnSort(LinkedListNS::LinkedList *listToSort, int sortSize, int start);
  };
}
#endif
