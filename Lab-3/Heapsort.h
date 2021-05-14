#ifndef HEAPSORT_H
#define HEAPSORT_H

class Heapsort{
private:
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

    public:
      void MaxHeapify(int*, int, int);
      void BuildMaxHeap(int*,int);
      void HeapSort(int*,int);
      void swap(int&,int&);
      void PrintHeap(int*,int);
      void shuffleArrays(int arr[], int descArr[], int dynArr[], int n);
      void timeSort(void (*sort)(int*,int),int*,int);
};
#endif
