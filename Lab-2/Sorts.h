#ifndef SORTS_H
#define SORTS_H
#include <iostream>

namespace Sorts{
  //Declares funtions
  int comparisons(int);
  void quicksort(int*, int, int);
  int partition(int*, int, int);
  void merge(int*,int, int, int);
  void mergesort(int*,int, int);
  void timeSort(void (*sort)(int*,int,int),int*,int,int);
  void swap(int&,int&);
  void shuffleArrays(int arr[], int descArr[], int dynArr[]);
  void shuffleArrays10K(int arr[], int descArr[], int dynArr[]);
  void shuffleArrays100K(int arr[], int descArr[], int dynArr[]);
  void shuffleArrays600K(int arr[], int descArr[], int dynArr[]);
  void printArr(int A[], int length);
  bool isSorted(int A[],int length);
}
#endif
