#include "Sorts.h"
#include<time.h>
#include<chrono>
#include<stdio.h>
#include<iostream>
#include<time.h>

void Sorts::quicksort(int* arr, int start, int end){
  int swaps = 0;

  if(start > end){
  }
  else{
    int pivt = partition(arr,start,end);
    Sorts::quicksort(arr, start,pivt-1);
    Sorts::quicksort(arr,pivt+1,end);
  }
}

//SPlits the array at a point and sorts each side seperatley
int Sorts::partition(int* arr, int start, int end){
  int pivt;
  int centerIndex;
  int pivtIndex;

  centerIndex = (start + end) / 2;
  swap(arr[start], arr[centerIndex]);
  pivtIndex = start;
  pivt = arr[start];

    for(int i = start+1; i <= end; i++)
    {
      if(arr[i] < pivt)
      {
        pivtIndex++;
          swap(arr[pivtIndex], arr[i]);
      }
    }
    swap(arr[start], arr[pivtIndex]);
    return pivtIndex;
}

//Sorts and merges arrays
void Sorts::merge(int* array,int left, int right, int middle){

  int a, b, k, n, m;
   n = middle - left + 1;
   m = right - middle;
  int lefArr[n];
  int rightArr[m];
  int comparisons = 0;

  for(a = 0; a < n; a++){
    lefArr[a] = array[left+a];
  }
  for(b = 0; b < m; b++){
    rightArr[b] = array[middle +1+b];
  }
  a = 0;
  b = 0;
  k = left;

  while(a < n && b < m){
    if(lefArr[a] <= rightArr[b]){
      array[k++] = lefArr[a++];
      comparisons++;
    }
    else{
      array[k++] = rightArr[b++];
      comparisons++;
    }
  }
  while(a < n){
    array[k++] = lefArr[a++];
  }
  while(b < m){
    array[k++] = rightArr[b++];
  }
}

//COunts comparisons
int Sorts::comparisons(int comp){
  return comp;
}

void Sorts::mergesort(int* arr,int left, int right){
  if(left < right){
    int middle = (left+right)/2;
    mergesort(arr,left,middle);
    mergesort(arr, middle+1, right);
    merge(arr, left, right, middle);
  }
}

//Swaps Elements
void Sorts::swap(int& x,int& y){
  int temp = x;
  x = y;
  y = temp;
}

//Sort method wrapped in a timer
void Sorts::timeSort(
    void (*sort)(int*,int,int),
    int* arr,
    int strt,
    int nd
    ){
        auto start = std::chrono::system_clock::now();
        sort(arr,strt,nd);
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout << "Finished at " << ctime(&end_time)
             << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}

//Checks if array is sorted
bool Sorts::isSorted(int A[],int length){
    bool sorted = false;
    for(int i = 0; i<=length;i++){
      if(A[i] > A[i+1]){
        sorted = false;
      }
      else{
        sorted = true;
        break;
      }
    }
    return sorted;
 }

 //Moves the data in the arrays so that they can be sorted again
 void Sorts::fillArrays(int arr[], int descArr[], int dynArr[], int n){
   int len = 1;

   for(int i = 0; i<= n; i++){
     arr[i] = len;
     len++;
   }

   len = n+1;
   for(int i = 0; i<= n; i++){
     descArr[i] = len;
     len--;
   }

   for(int i = 0; i <= n; i++){
     *(dynArr + i) = rand()% n + 1;
   }
 }

 void Sorts::shuffle(int arr[],int n){
   for(int i = 0; i < n; i++){
     int k = rand()% n + 1;
     Sorts::swap(arr[i], arr[k]);
   }
 }

//Prints arrays
void Sorts::printArr(int A[], int length){
  for(int i = 0; i<=length; i++)
    {
      std::cout << A[i] << " ";
    }
    std::cout << "\n\n";
}
