#ifndef SORTS_H
#define SORTS_H
#include <iostream>

namespace Sorts{
  int comparisons(int);
  void quicksort(int*, int, int);
  void RQSQuicksort(int*, int, int);
  int partition(int*, int, int);
  void merge(int*,int, int, int);
  void mergesort(int*,int, int);
  double timeSort(void (*sort)(int*,int,int),int*,int,int);
  void swap(int&,int&);
  void fillArrays(int arr[], int descArr[], int dynArr[],int n);
  void fillNshuffle(int arr[],int n);
  void printArr(int A[], int length);
  bool isSorted(int A[],int length);
  int hiringAssistant(int*, int);
  void MaxHeapify(int*, int, int);
  void BuildMaxHeap(int*,int);
  void HeapSort(int*,int,int);
}
#endif
