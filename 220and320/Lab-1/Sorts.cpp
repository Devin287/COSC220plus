#include "Sorts.h"
#include<time.h>
#include<chrono>
#include<stdio.h>
#include<iostream>
#include<time.h>

void Sorts::timeSort(void (*sort)(int*,int),
    int* arr,
    int n
    ){
        auto start = std::chrono::system_clock::now();
        sort(arr,n);
        auto end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::cout << "Finished at " << ctime(&end_time)
             << "Elapsed time: " << elapsed_seconds.count() << "s\n";
}

void Sorts::BubbleSort(int* A,int length){
  bool swapped = true;
  int swaps = 0;
  while(swapped){
    swapped = false;
    for(int i = 0; i<length-1;i++){
      if(A[i] > A[i+1]){
        int temp;
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
        swapped = true;
        swaps++;
      }
    }
   }
   std::cout << "Number of swaps for bubble sort is " << swaps;
   isSorted(A,length);
 }

 void Sorts::InsertionSort(int* A,int length){
   int j = 0;
   int temp = 0;
   int swaps = 0;
    for(int i = 1; i<length;i++){
      j=i;
      while(j>0 && A[j] < A[j-1]){
        temp = A[j];
        A[j] = A[j-1];
        A[j-1] = temp;
        j = j-1;
        swaps++;
      }
    }
    std::cout << "Number of swaps for insertion sort is " << swaps;
    isSorted(A,length);
 }

 void Sorts::SelectionSort(int* A,int length){
   int swaps = 0;
   int min = 0;
   int temp = 0;
    for(int i = 0; i < length-1; i++){
      min = i;
      for(int j = i + 1; j<length;j++){
        if(A[j]<A[min]){
          min = j;
        }
      }
      temp = A[i];
      A[i] = A[min];
      A[min] = temp;
      swaps++;
    }
    std::cout << "Number of swaps for selection sort is " << swaps;
    isSorted(A,length);
 }

 void Sorts::isSorted(int A[],int length){
     for(int i = 0; i<length-1;i++){
       if(A[i] > A[i+1]){
         std::cout << "\nThe list is not sorted.\n";
         break;
       }
       else{
         std::cout << "\nThe list is sorted.\n";
         break;
       }
     }
  }

  void Sorts::printArr(int A[], int length){
    for(int i = 0; i<length; i++)
      {
        std::cout << A[i] << " ";
      }
      std::cout << "\n\n";
  }

  //Moves the data in the arrays so that they can be sorted again
  void Sorts::shuffleArrays(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 99; i++){
      arr[i] = len;
      len++;
    }

    len = 100;
    for(int i = 0; i<= 99; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 99; i++){
      *(dynArr + i) = rand()% 99 + 1;
    }
  }

  void Sorts::shuffleArrays500Hrd(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 499; i++){
      arr[i] = len;
      len++;
    }

    len = 500;
    for(int i = 0; i<= 499; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 499; i++){
      *(dynArr + i) = rand()% 499 + 1;
    }
  }

  void Sorts::shuffleArrays1K(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 999; i++){
      arr[i] = len;
      len++;
    }

    len = 1000;
    for(int i = 0; i<= 999; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 999; i++){
      *(dynArr + i) = rand()% 999 + 1;
    }
  }

  void Sorts::shuffleArrays5K(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 4999; i++){
      arr[i] = len;
      len++;
    }

    len = 5000;
    for(int i = 0; i<= 4999; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 4999; i++){
      *(dynArr + i) = rand()% 4999 + 1;
    }
  }

  void Sorts::shuffleArrays10K(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 9999; i++){
      arr[i] = len;
      len++;
    }

    len = 10000;
    for(int i = 0; i<= 9999; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 9999; i++){
      *(dynArr + i) = rand()% 9999 + 1;
    }
  }

  void Sorts::shuffleArrays50K(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 49999; i++){
      arr[i] = len;
      len++;
    }

    len = 50000;
    for(int i = 0; i<= 49999; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 49999; i++){
      *(dynArr + i) = rand()% 49999 + 1;
    }
  }

  void Sorts::shuffleArrays100K(int arr[], int descArr[], int dynArr[]){
    int len = 1;

    for(int i = 0; i<= 99999; i++){
      arr[i] = len;
      len++;
    }

    len = 100000;
    for(int i = 0; i<= 99999; i++){
      descArr[i] = len;
      len--;
    }

    for(int i = 0; i <= 99999; i++){
      *(dynArr + i) = rand()% 99999 + 1;
    }
  }
