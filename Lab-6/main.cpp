//Devin Schmidt
//Lab-6
//COSC-320
#include "Sorts.h"
#include <iostream>

int main(){
  //Declaring arrays
  int* dynArr = new int[10000];
  int arr[10000];
  int descArr[10000];
  srand(time(NULL));


//Performing hiring assistant//
int swaps = 0;
int* assistants = new int[10000];
int* temp = new int[10000];
Sorts::fillNshuffle(temp,9999);
delete[] temp;

for(int t = 10000; t < 1000000; t=t+50000){
  if(t > 10000){
    temp = new int[t];
    assistants = temp;
  }
  for(int i = 0; i < 10; i++){
    Sorts::fillNshuffle(assistants,t-1);
    swaps = swaps + Sorts::hiringAssistant(assistants,t-1);
  }
  swaps = swaps/10;
  std::cout << "\nThere are an average of " << swaps << " swaps for the hiring assistant.\n";
  delete [] assistants;
  if(t > 1000000){
    delete [] temp;
  }
}


//10000Thsd size test for sorts//
std::cout << "\n10000Thsd test size for sorts....\n";

//double x is for computing avg
double x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr, descArr, dynArr,9999);
Sorts::fillNshuffle(dynArr,9999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr,0,9999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr,0,9999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr,0,9999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr, 9999);
Sorts::isSorted(descArr, 9999);
Sorts::isSorted(dynArr, 9999);

Sorts::fillArrays(arr, descArr, dynArr,9999);
Sorts::fillNshuffle(dynArr,9999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr,0,9999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr,0,9999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr,0,9999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr, 9999);
Sorts::isSorted(descArr, 9999);
Sorts::isSorted(dynArr, 9999);

Sorts::fillArrays(arr, descArr, dynArr,9999);
Sorts::fillNshuffle(dynArr,9999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr,0,9999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr,0,9999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr,0,9999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr, 9999);
Sorts::isSorted(descArr, 9999);
Sorts::isSorted(dynArr, 9999);

Sorts::fillArrays(arr, descArr, dynArr,9999);
Sorts::fillNshuffle(dynArr,9999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr,0,9999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr,0,9999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr,0,9999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr, 9999);
Sorts::isSorted(descArr, 9999);
Sorts::isSorted(dynArr, 9999);

//50000Thsd size test for sorts//
std::cout << "\n50000Thsd test size for sorts....\n";

//Declaring arrays
int arr50K[50000];
int descArr50K[50000];
int* dynArr50K = new int[50000];

//double x is for computing avg
x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr50K, descArr50K, dynArr50K,49999);
Sorts::fillNshuffle(dynArr50K,49999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr50K,0,49999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr50K,0,49999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr50K,0,49999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr50K, 49999);
Sorts::isSorted(descArr50K, 49999);
Sorts::isSorted(dynArr50K, 49999);

Sorts::fillArrays(arr50K, descArr50K, dynArr50K,49999);
Sorts::fillNshuffle(dynArr50K,49999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr50K,0,49999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr50K,0,49999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr50K,0,49999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr50K, 49999);
Sorts::isSorted(descArr50K, 49999);
Sorts::isSorted(dynArr50K, 49999);

Sorts::fillArrays(arr50K, descArr50K, dynArr50K,49999);
Sorts::fillNshuffle(dynArr50K,49999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr50K,0,49999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr50K,0,49999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr50K,0,49999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr50K, 49999);
Sorts::isSorted(descArr50K, 49999);
Sorts::isSorted(dynArr50K, 49999);

Sorts::fillArrays(arr50K, descArr50K, dynArr50K,49999);
Sorts::fillNshuffle(dynArr50K,49999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr50K,0,49999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr50K,0,49999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr50K,0,49999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr50K, 49999);
Sorts::isSorted(descArr50K, 49999);
Sorts::isSorted(dynArr50K, 49999);

//150000Thsd size test for sorts//
std::cout << "\n150000Thsd test size for sorts....\n";

//Declaring arrays
int arr150K[150000];
int descArr150K[150000];
int* dynArr150K = new int[150000];

//double x is for computing avg
x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr150K, descArr150K, dynArr150K,149999);
Sorts::fillNshuffle(dynArr150K,149999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr150K,0,149999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr150K,0,149999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr150K,0,149999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr150K, 149999);
Sorts::isSorted(descArr150K, 149999);
Sorts::isSorted(dynArr150K, 149999);

Sorts::fillArrays(arr150K, descArr150K, dynArr150K,149999);
Sorts::fillNshuffle(dynArr150K,149999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr150K,0,149999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr150K,0,149999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr150K,0,149999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr150K, 149999);
Sorts::isSorted(descArr150K, 149999);
Sorts::isSorted(dynArr150K, 149999);

Sorts::fillArrays(arr150K, descArr150K, dynArr150K,149999);
Sorts::fillNshuffle(dynArr150K,149999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr150K,0,149999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr150K,0,149999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr150K,0,149999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr150K, 149999);
Sorts::isSorted(descArr150K, 149999);
Sorts::isSorted(dynArr150K, 149999);

Sorts::fillArrays(arr150K, descArr150K, dynArr150K,149999);
Sorts::fillNshuffle(dynArr150K,149999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr150K,0,149999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr150K,0,149999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr150K,0,149999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr150K, 149999);
Sorts::isSorted(descArr150K, 149999);
Sorts::isSorted(dynArr150K, 149999);

//350000Thsd size test for sorts//
std::cout << "\n350000Thsd test size for sorts....\n";

//Declaring arrays
int arr350K[350000];
int descArr350K[350000];
int* dynArr350K = new int[350000];

//double x is for computing avg
x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr350K, descArr350K, dynArr350K,349999);
Sorts::fillNshuffle(dynArr350K,349999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr350K,0,349999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr350K,0,349999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr350K,0,349999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr350K, 349999);
Sorts::isSorted(descArr350K, 349999);
Sorts::isSorted(dynArr350K, 349999);

Sorts::fillArrays(arr350K, descArr350K, dynArr350K,349999);
Sorts::fillNshuffle(dynArr350K,349999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr350K,0,349999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr350K,0,349999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr350K,0,349999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr350K, 349999);
Sorts::isSorted(descArr350K, 349999);
Sorts::isSorted(dynArr350K, 349999);

Sorts::fillArrays(arr350K, descArr350K, dynArr350K,349999);
Sorts::fillNshuffle(dynArr350K,349999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr350K,0,349999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr350K,0,349999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr350K,0,349999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr350K, 349999);
Sorts::isSorted(descArr350K, 349999);
Sorts::isSorted(dynArr350K, 349999);

Sorts::fillArrays(arr350K, descArr350K, dynArr350K,349999);
Sorts::fillNshuffle(dynArr350K,349999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr350K,0,349999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr350K,0,349999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr350K,0,349999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr350K, 349999);
Sorts::isSorted(descArr350K, 349999);
Sorts::isSorted(dynArr350K, 349999);

//600000Thsd size test for sorts//
std::cout << "\n600000Thsd test size for sorts....\n";

//Declaring arrays
int* arr600K = new int[600000];
int* descArr600K = new int[600000];
int* dynArr600K = new int[600000];

//double x is for computing avg
x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr600K, descArr600K, dynArr600K,599999);
Sorts::fillNshuffle(dynArr600K,599999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr600K,0,599999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr600K,0,599999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr600K,0,599999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr600K, 599999);
Sorts::isSorted(descArr600K, 599999);
Sorts::isSorted(dynArr600K, 599999);

Sorts::fillArrays(arr600K, descArr600K, dynArr600K,599999);
Sorts::fillNshuffle(dynArr600K,599999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr600K,0,599999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr600K,0,599999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr600K,0,599999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr600K, 599999);
Sorts::isSorted(descArr600K, 599999);
Sorts::isSorted(dynArr600K, 599999);

Sorts::fillArrays(arr600K, descArr600K, dynArr600K,599999);
Sorts::fillNshuffle(dynArr600K,599999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr600K,0,599999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr600K,0,599999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr600K,0,599999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr600K, 599999);
Sorts::isSorted(descArr600K, 599999);
Sorts::isSorted(dynArr600K, 599999);

Sorts::fillArrays(arr600K, descArr600K, dynArr600K,599999);
Sorts::fillNshuffle(dynArr600K,599999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr600K,0,599999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr600K,0,599999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr600K,0,599999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr600K, 599999);
Sorts::isSorted(descArr600K, 599999);
Sorts::isSorted(dynArr600K, 599999);

//1000000Thsd size test for sorts//
std::cout << "\n1000000Thsd test size for sorts....\n";

//Declaring arrays
int* arr1M = new int[1000000];
int* descArr1M = new int[1000000];
int* dynArr1M = new int[1000000];

//double x is for computing avg
x = 0;

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr1M, descArr1M, dynArr1M,999999);
Sorts::fillNshuffle(dynArr1M,999999);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr1M,0,999999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr1M,0,999999);
std::cout << "\nQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::quicksort,dynArr1M,0,999999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr1M, 999999);
Sorts::isSorted(descArr1M, 999999);
Sorts::isSorted(dynArr1M, 999999);

Sorts::fillArrays(arr1M, descArr1M, dynArr1M,999999);
Sorts::fillNshuffle(dynArr1M,999999);

std::cout << "\nRQSQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,arr1M,0,999999);
std::cout << "\nRQSQuicksort of descending array...\n";
Sorts::timeSort(Sorts::RQSQuicksort,descArr1M,0,999999);
std::cout << "\nRQSQuicksort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::RQSQuicksort,dynArr1M,0,999999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr1M, 999999);
Sorts::isSorted(descArr1M, 999999);
Sorts::isSorted(dynArr1M, 999999);

//For some reason mergesort didnt like one million
//I could not figure it out
/*
Sorts::fillArrays(arr1M, descArr1M, dynArr1M,999999);
Sorts::fillNshuffle(dynArr1M,999999);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr1M,0,999999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr1M,0,999999);
std::cout << "\nMergesort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::mergesort,dynArr1M,0,999999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
}

Sorts::isSorted(arr1M, 999999);
Sorts::isSorted(descArr1M, 999999);
Sorts::isSorted(dynArr1M, 999999);
*/
Sorts::fillArrays(arr1M, descArr1M, dynArr1M,999999);
Sorts::fillNshuffle(dynArr1M,999999);

std::cout << "\nHeapSort of ascending array...\n";
Sorts::timeSort(Sorts::HeapSort,arr1M,0,999999);
std::cout << "\nHeapSort of descending array...\n";
Sorts::timeSort(Sorts::HeapSort,descArr1M,0,999999);
std::cout << "\nHeapSort of random array...\n";
for(int i = 1; i <= 20; i++){
  x = x + Sorts::timeSort(Sorts::HeapSort,dynArr1M,0,999999);
  if(i >= 20){
    x = x/20;
    std::cout << "\nThe average for this random array is " << x << ".\n";
    x = 0;
  }
 }

Sorts::isSorted(arr1M, 999999);
Sorts::isSorted(descArr1M, 999999);
Sorts::isSorted(dynArr1M, 999999);

delete [] dynArr;
delete [] dynArr50K;
delete [] dynArr150K;
delete [] dynArr350K;
delete [] dynArr600K;
delete [] arr600K;
delete [] descArr600K;
delete [] arr1M;
delete [] descArr1M;
delete [] dynArr1M;

  return 0;
}
