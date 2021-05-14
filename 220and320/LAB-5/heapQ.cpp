#include "heapQ.h"
#include<iostream>
#include <cmath>
#include<time.h>
#include<chrono>

HeapQ::HeapQ(int n){
  length = n;
  arr = new HeapObj[length];
}

//Swaps Elements
void HeapQ::swap(int& x,int& y){
  int temp = x;
  x = y;
  y = temp;
}

//Swaps to get root as max
void HeapQ::MaxHeapify(int* A,int i,int n){
  int l = 2*i+1; //left
  int r = 2*i+2; //right
  int largest = i;

  HeapObj a;
  heap_size = n;

  //Find the largest among node i and, swap with i
  if(l <= heap_size && A[l] > A[largest]){
    largest = l;
  }
  else{
    largest = i;
  }
  if(r <= heap_size && A[r] > A[largest]){
    largest = r;
  }
  if(largest != i){
    //We may have violated the heap property, so recurse downward
    swap(A[i], A[largest]);
    MaxHeapify(A,largest,n);
  }
}

//Builds the heap
void HeapQ::BuildMaxHeap(int* A,int n){
  HeapObj a;
  heap_size = n;
  length = n;

  heap_size = length; //the whole array will be a heap when we're done
  for(int i= length/2; i >= 1; i--){
    MaxHeapify(A,i,n);
  }
}

//Sorts the array
void HeapQ::HeapSort(int* A,int n){
  HeapObj a;
  heap_size = n;
  length = n;
  int swaps = 0;

  //Make sure the array is a valid heap, where the largest element must be A[1]
  BuildMaxHeap(A,n);
  for(int i=length; i>=0; i--){
    //We know A[i] is the largest among A[1,...,i], so move it
    //to the back, and consider it removed from the heap
    swap(A[0], A[i]);
    heap_size = heap_size-1;
    //We moved one of the smaller elements to the root, so we have to clean up
    MaxHeapify(A,0,n);
  }
}
int HeapQ::Parent(int i){
  if((i > 1) && (i < heap_size)){
    return i/2;
  }
}
void HeapQ::increaseKey(int i,int k){
  //Increases the priority of the item at location i in the heap, then
  // does a "reverse" MaxHeapify to move it upward accordingly
  HeapObj a = arr[i];
  if(k < a.key){
    std::cout << "Error new key is smaller than old key!";
    return;
  }
  HeapObj b = arr[Parent(i)];
  a.key = k;
  while((i > 1) && (b.data < a.data)){
    swap(a.data, b.data);
    i = Parent(i);
  }
}

void HeapQ::insert(int k,int n){
  HeapObj a;
  /*if(heap_size > length){
    arr = new HeapObj[length * 2];
  }*/

  //a.heap_size=n;
  //A[a.heap_size] = a.heap_size + 1;
  //A[a.heap_size] = -1*100000;
  a.data = n;
  a.key = -100000;
  heap_size++;
  arr[heap_size] = a;
  increaseKey(heap_size,k);
}

int HeapQ::peek(int* A){
  return A[0];
}

int HeapQ::dequeue(int* A){
  HeapObj a;
  int tmp = A[1];
  A[1] = A[heap_size];
  heap_size = heap_size-1;
  return tmp;
}

//Prints the heap
void HeapQ::printHeap(int* A, int n){
  for (int i = 0; i < n; i++) {
      std::cout << " \n" << A[i];
  }
  std::cout << "\n";
}

//Moves the data in the arrays so that they can be sorted again
void HeapQ::shuffleArrays(int arr[], int descArr[], int dynArr[], int n){
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
void HeapQ::timeSort(
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
