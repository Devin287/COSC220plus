#ifndef HEAPQ_H
#define HEAPQ_H

class HeapQ{
private:
  //template <class T>
  struct HeapObj{
      int data;
      int key;

  };

  HeapObj* arr; //Underlying array
  int length; //should alway be the size of array
  int heap_size; //will change based on which portion of array is a valid heap

    public:
      HeapQ(int);
      void MaxHeapify(int*, int, int);
      void BuildMaxHeap(int*,int);
      void HeapSort(int*,int);
      void swap(int&,int&);
      void increaseKey(int,int);
      void insert(int,int);
      void printHeap(int*,int);
      int  Parent(int);
      int dequeue(int*);
      int peek(int*);
      void shuffleArrays(int arr[], int descArr[], int dynArr[], int n);
      void timeSort(void (*sort)(int*,int),int*,int);
};
#endif
