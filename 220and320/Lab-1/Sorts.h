#ifndef SORTS_H
#define SORTS_H
#include<iostream>

namespace Sorts{
    void BubbleSort(int*,int);
    void InsertionSort(int*,int);
    void SelectionSort(int*,int);
    void isSorted(int A[],int length);
    void printArr(int A[], int length);
    void timeSort(void (*sort)(int*,int),int* arr,int n);
    void shuffleArrays(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays500Hrd(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays1K(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays5K(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays10K(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays100K(int arr[], int descArr[], int dynArr[]);
    void shuffleArrays50K(int arr[], int descArr[], int dynArr[]);
  }
#endif
