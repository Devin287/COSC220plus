#include "Heapsort.h"
#include<iostream>
#include <cmath>
#include<time.h>
#include<chrono>

//Swaps Elements
void Heapsort::swap(int& x,int& y){
  int temp = x;
  x = y;
  y = temp;
}

//Swaps to get root as max
void Heapsort::MaxHeapify(int* A,int i,int n){
  int l = 2*i+1; //left
  int r = 2*i+2; //right
  int largest = i;

  Heap a;
  a.heap_size = n;

  //Find the largest among node i and, swap with i
  if(l <= a.heap_size && A[l] > A[largest]){
    largest = l;
  }
  else{
    largest = i;
  }
  if(r <= a.heap_size && A[r] > A[largest]){
    largest = r;
  }
  if(largest != i){
    //We may have violated the heap property, so recurse downward
    swap(A[i], A[largest]);
    MaxHeapify(A,largest,n);
  }
}

//Builds the heap
void Heapsort::BuildMaxHeap(int* A,int n){
  Heap a;
  a.heap_size = n;
  a.length = n;

  a.heap_size = a.length; //the whole array will be a heap when we're done
  for(int i= a.length/2; i >= 1; i--){
    MaxHeapify(A,i,n);
  }
}

//Sorts the array
void Heapsort::HeapSort(int* A,int n){
  Heap a;
  a.heap_size = n;
  a.length = n;
  int swaps = 0;

  //Make sure the array is a valid heap, where the largest element must be A[1]
  BuildMaxHeap(A,n);
  for(int i=a.length; i>=0; i--){
    //We know A[i] is the largest among A[1,...,i], so move it
    //to the back, and consider it removed from the heap
    swap(A[0], A[i]);
    swaps++;
    a.heap_size = a.heap_size-1;
    //We moved one of the smaller elements to the root, so we we have to clean up
    MaxHeapify(A,0,n);
  }
  std::cout << "Number of swaps for heap sort is " << swaps;
}

//Prints the heap
void Heapsort::PrintHeap(int* A, int n){
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < pow(2,i) && j + pow(2,i) < n; j++){
      std::cout << A[j+(int)pow(2,i)-1]<< " ";
    }
    std::cout << "\n";
  }
}

//Moves the data in the arrays so that they can be sorted again
void Heapsort::shuffleArrays(int arr[], int descArr[], int dynArr[], int n){
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

//Sort method wrapped in a timer
void Heapsort::timeSort(
    void (*sort)(int*,int),
    int* arr,
    int nd
    ){
        auto start = std::chrono::system_clock::now();
        sort(arr,nd);
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout << "Finished at " << ctime(&end_time)
             << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}
