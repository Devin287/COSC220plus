#include "Sorts.h"
#include<time.h>
#include<chrono>
#include<stdio.h>
#include<iostream>
#include<time.h>

void Sorts::RQSQuicksort(int* arr, int start, int end){
  int swaps = 0;

  if(start < end){
    int temp = rand()%(start-end);
    Sorts::swap(arr[end],arr[temp]);
    int pivt = partition(arr,start,end);
    Sorts::quicksort(arr, start,pivt-1);
    Sorts::quicksort(arr,pivt+1,end);
  }
}

void Sorts::quicksort(int* arr, int start, int end){
  int swaps = 0;

  if(start < end){
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
double Sorts::timeSort(
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
             return elapsed_seconds.count();
}

//Checks if array is sorted
bool Sorts::isSorted(int A[],int length){
    bool sorted = false;
    for(int i = 0; i<=length;i++){
      if(A[i] > A[i+1]){
        sorted = false;
        std::cout << "\nNot sorted!\n";
        break;
      }
      else{
        sorted = true;
        std::cout << "\nSorted!\n";
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

 void Sorts::fillNshuffle(int arr[],int n){
   int len = 1;
   for(int i = 0; i<= n; i++){
     *(arr+i) = len;
     len++;
   }

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

int Sorts::hiringAssistant(int* arr,int n){
  int max = 0;
  int swaps = 0;
  for(int i = 0; i < n; i++){
    if(max < arr[i]){
      max = arr[i];
      swaps++;
    }
  }
  return swaps;
}

struct Heap{
    int* arr; //Underlying array
    int length; //should alway be the size of array
    int heap_size; //will change based on which portion of array is a valid heap

    //give the struct an [] operator to pass through access to array
    //we return an int reference so we can assign into the structure,
    //otherwise it would only return a copy of the indexed element
    int& operator[](int i){
      //good idea to also check that 1<= i <= length!
      return arr[i-1]; //so A[1] is the first and A[n] is the last
    }
};


//Swaps to get root as max
void Sorts::MaxHeapify(int* A,int i,int n){
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
    Sorts::swap(A[i], A[largest]);
    Sorts::MaxHeapify(A,largest,n);
  }
}

//Builds the heap
void Sorts::BuildMaxHeap(int* A,int n){
  Heap a;
  a.heap_size = n;
  a.length = n;

  a.heap_size = a.length; //the whole array will be a heap when we're done
  for(int i= a.length/2; i >= 1; i--){
    Sorts::MaxHeapify(A,i,n);
  }
}

//Sorts the array
void Sorts::HeapSort(int* A,int n,int k){
  Heap a;
  a.heap_size = n;
  a.length = n;
  int swaps = 0;

  //Make sure the array is a valid heap, where the largest element must be A[1]
  Sorts::BuildMaxHeap(A,n);
  for(int i=a.length; i>=0; i--){
    //We know A[i] is the largest among A[1,...,i], so move it
    //to the back, and consider it removed from the heap
    Sorts::swap(A[0], A[i]);
    swaps++;
    a.heap_size = a.heap_size-1;
    //We moved one of the smaller elements to the root, so we we have to clean up
    Sorts::MaxHeapify(A,0,n);
  }
  //std::cout << "Number of swaps for heap sort is " << swaps;
}
