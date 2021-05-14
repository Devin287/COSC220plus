#include "Sorts.h"
#include <iostream>

//Devin Schmidt
//COSC-320
//Description: Implements and tests quicksort and merge sort as well as timing them
int main(){
  //100Hrd size test//
std::cout << "\n100Hrd test size for sorts....\n";

int* dynArr = new int[99];
int arr[99];
int descArr[99];
srand(time(NULL));

//shuffleArrays method Fills arrays
Sorts::shuffleArrays(arr, descArr, dynArr);


std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr,0,99);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr,0,99);
std::cout << "\nQuicksort of random array...\n";
Sorts::timeSort(Sorts::quicksort,dynArr,0,99);

Sorts::shuffleArrays(arr, descArr, dynArr);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr,0,99);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr,0,99);
std::cout << "\nMergesort of random array...\n";
Sorts::timeSort(Sorts::mergesort,dynArr,0,99);

              //10K size test//
std::cout << "\n10K test size for sorts....\n";

int* dynArr10K = new int[9999];
int arr10K[9999];
int descArr10K[9999];
srand(time(NULL));

Sorts::shuffleArrays10K(arr10K, descArr10K, dynArr10K);


std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr10K,0,9999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr10K,0,9999);
std::cout << "\nQuicksort of random array...\n";
Sorts::timeSort(Sorts::quicksort,dynArr10K,0,9999);

Sorts::shuffleArrays10K(arr10K, descArr10K, dynArr10K);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr10K,0,9999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr10K,0,9999);
std::cout << "\nMergesort of random array...\n";
Sorts::timeSort(Sorts::mergesort,dynArr10K,0,9999);

              //100K size test//
std::cout << "\n100K test size for sorts....\n";

int* dynArr100K = new int[99999];
int arr100K[99999];
int descArr100K[99999];
srand(time(NULL));

Sorts::shuffleArrays100K(arr100K, descArr100K, dynArr100K);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr100K,0,99999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr100K,0,99999);
std::cout << "\nQuicksort of random array...\n";
Sorts::timeSort(Sorts::quicksort,dynArr100K,0,99999);

Sorts::shuffleArrays100K(arr100K, descArr100K, dynArr100K);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr100K,0,99999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr100K,0,99999);
std::cout << "\nMergesort of random array...\n";
Sorts::timeSort(Sorts::mergesort,dynArr100K,0,99999);

              //600K size test//
std::cout << "\n600K test size for sorts....\n";

int* dynArr600K = new int[599999];
int arr600K[599999];
int descArr600K[599999];
srand(time(NULL));

Sorts::shuffleArrays600K(arr600K, descArr600K, dynArr600K);

std::cout << "\nQuicksort of ascending array...\n";
Sorts::timeSort(Sorts::quicksort,arr600K,0,599999);
std::cout << "\nQuicksort of descending array...\n";
Sorts::timeSort(Sorts::quicksort,descArr600K,0,599999);
std::cout << "\nQuicksort of random array...\n";
Sorts::timeSort(Sorts::quicksort,dynArr600K,0,599999);

Sorts::shuffleArrays600K(arr600K, descArr600K, dynArr600K);

std::cout << "\nMergesort of ascending array...\n";
Sorts::timeSort(Sorts::mergesort,arr600K,0,599999);
std::cout << "\nMergesort of descending array...\n";
Sorts::timeSort(Sorts::mergesort,descArr600K,0,599999);
std::cout << "\nMergesort of random array...\n";
Sorts::timeSort(Sorts::mergesort,dynArr600K,0,599999);

delete [] dynArr;
delete [] dynArr10K;
delete [] dynArr100K;
delete [] dynArr600K;
return 0;
}
