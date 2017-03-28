#ifndef SHELL_H
#define SHELL_H

#include<iostream>
#include<string>
#include<cmath>
#include <cstdlib>
#include"../insertion-sort/InsertionSort.cpp"
using namespace std;


namespace ShellSort{
  class Shell
  {
  public:
    static LinkedListNS::LinkedList* sort(LinkedListNS::LinkedList *inputList);
  private:
    static LinkedListNS::LinkedList* insertionSort(LinkedListNS::LinkedList *listToSort, int sorterSize);
  };
}
#endif
