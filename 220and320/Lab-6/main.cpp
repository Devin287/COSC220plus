//Devin Schmidt
//Lab-6
//COSC-320
#include "Sorts.h"
#include <iostream>

int main(){

  //100Hrd size test//
std::cout << "\n100Hrd test size for sorts....\n";

int* dynArr = new int[99];
int arr[99];
int descArr[99];
srand(time(NULL));

//shuffleArrays method Fills arrays
Sorts::fillArrays(arr, descArr, dynArr,99);
Sorts::printArr(dynArr,99);
Sorts::shuffle(arr,99);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr,0,99);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr,0,99);
std::cout << "\nQuicksort of random array...\n";
Sorts::timeSort(Sorts::quicksort,dynArr,0,99);

Sorts::fillArrays(arr, descArr, dynArr,99);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr,0,99);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr,0,99);
std::cout << "\nMergesort of random array...\n";
Sorts::timeSort(Sorts::mergesort,dynArr,0,99);

  return 0;
}
