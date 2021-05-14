#include <iostream>
#include "Sorts.h"
#include<stdio.h>
#include<time.h>
#include<chrono>

int main(){

                  //100Hrd size test//
  std::cout << "\n100Hrd test size for sorts....\n";

  int* dynArr = new int[99];
  int arr[99];
  int descArr[99];
  srand(time(NULL));

  Sorts::shuffleArrays(arr, descArr, dynArr);

  std::cout << "\nBubble sort of ascending array...\n";
  Sorts::timeSort(Sorts::BubbleSort,arr,100);
  std::cout << "\nBubble sort of descending array...\n";
  Sorts::timeSort(Sorts::BubbleSort,descArr,100);
  std::cout << "\nBubble sort of random array...\n";
  Sorts::timeSort(Sorts::BubbleSort,dynArr,100);

  Sorts::shuffleArrays(arr, descArr, dynArr);

  std::cout << "\nSelection sort of ascending array...\n";
  Sorts::timeSort(Sorts::SelectionSort,arr,100);
  std::cout << "\nSelection sort of descending array...\n";
  Sorts::timeSort(Sorts::SelectionSort,descArr,100);
  std::cout << "\nSelection sort of random array...\n";
  Sorts::timeSort(Sorts::SelectionSort,dynArr,100);

  Sorts::shuffleArrays(arr, descArr, dynArr);

  std::cout << "\nInsertion sort of ascending array...\n";
  Sorts::timeSort(Sorts::InsertionSort,arr,100);
  std::cout << "\nInsertion sort of descending array...\n";
  Sorts::timeSort(Sorts::InsertionSort,descArr,100);
  std::cout << "\nInsertion sort of random array...\n";
  Sorts::timeSort(Sorts::InsertionSort,dynArr,100);

                //500Hrd size test//
  std::cout << "\n500Hrd test size for sorts....\n";

  int arr500Hrd[499];
  int descArr500Hrd[499];
  int* dynArr500Hrd = new int[499];

  Sorts::shuffleArrays500Hrd(arr500Hrd, descArr500Hrd, dynArr500Hrd);

  std::cout << "\nBubble sort of ascending array...\n";
  Sorts::timeSort(Sorts::BubbleSort,arr500Hrd,500);
  std::cout << "\nBubble sort of descending array...\n";
  Sorts::timeSort(Sorts::BubbleSort,descArr500Hrd,500);
  std::cout << "\nBubble sort of random array...\n";
  Sorts::timeSort(Sorts::BubbleSort,dynArr500Hrd,500);

  Sorts::shuffleArrays500Hrd(arr500Hrd, descArr500Hrd, dynArr500Hrd);

  std::cout << "\nSelection sort of ascending array...\n";
  Sorts::timeSort(Sorts::SelectionSort,arr500Hrd,500);
  std::cout << "\nSelection sort of descending array...\n";
  Sorts::timeSort(Sorts::SelectionSort,descArr500Hrd,500);
  std::cout << "\nSelection sort of random array...\n";
  Sorts::timeSort(Sorts::SelectionSort,dynArr500Hrd,500);

  Sorts::shuffleArrays500Hrd(arr500Hrd, descArr500Hrd, dynArr500Hrd);

  std::cout << "\nInsertion sort of ascending array...\n";
  Sorts::timeSort(Sorts::InsertionSort,arr500Hrd,500);
  std::cout << "\nInsertion sort of descending array...\n";
  Sorts::timeSort(Sorts::InsertionSort,descArr500Hrd,500);
  std::cout << "\nInsertion sort of random array...\n";
  Sorts::timeSort(Sorts::InsertionSort,dynArr500Hrd,500);

                //1K size test//
std::cout << "\n1K test size for sorts....\n";

int arr1K[999];
int descArr1K[999];
int* dynArr1K = new int[999];

Sorts::shuffleArrays1K(arr1K, descArr1K, dynArr1K);

std::cout << "\nBubble sort of ascending array...\n";
Sorts::timeSort(Sorts::BubbleSort,arr1K,999);
std::cout << "\nBubble sort of descending array...\n";
Sorts::timeSort(Sorts::BubbleSort,descArr1K,999);
std::cout << "\nBubble sort of random array...\n";
Sorts::timeSort(Sorts::BubbleSort,dynArr1K,999);

Sorts::shuffleArrays1K(arr1K, descArr1K, dynArr1K);

std::cout << "\nSelection sort of ascending array...\n";
Sorts::timeSort(Sorts::SelectionSort,arr1K,999);
std::cout << "\nSelection sort of descending array...\n";
Sorts::timeSort(Sorts::SelectionSort,descArr1K,999);
std::cout << "\nSelection sort of random array...\n";
Sorts::timeSort(Sorts::SelectionSort,dynArr1K,999);

Sorts::shuffleArrays1K(arr1K, descArr1K, dynArr1K);

std::cout << "\nInsertion sort of ascending array...\n";
Sorts::timeSort(Sorts::InsertionSort,arr1K,999);
std::cout << "\nInsertion sort of descending array...\n";
Sorts::timeSort(Sorts::InsertionSort,descArr1K,999);
std::cout << "\nInsertion sort of random array...\n";
Sorts::timeSort(Sorts::InsertionSort,dynArr1K,999);

              //5K size test//
std::cout << "\n5K test size for sorts....\n";

int arr5K[4999];
int descArr5K[4999];
int* dynArr5K = new int[4999];

Sorts::shuffleArrays5K(arr5K, descArr5K, dynArr5K);

std::cout << "\nBubble sort of ascending array...\n";
Sorts::timeSort(Sorts::BubbleSort,arr5K,4999);
std::cout << "\nBubble sort of descending array...\n";
Sorts::timeSort(Sorts::BubbleSort,descArr5K,4999);
std::cout << "\nBubble sort of random array...\n";
Sorts::timeSort(Sorts::BubbleSort,dynArr5K,4999);

Sorts::shuffleArrays5K(arr5K, descArr5K, dynArr5K);

std::cout << "\nSelection sort of ascending array...\n";
Sorts::timeSort(Sorts::SelectionSort,arr5K,4999);
std::cout << "\nSelection sort of descending array...\n";
Sorts::timeSort(Sorts::SelectionSort,descArr5K,4999);
std::cout << "\nSelection sort of random array...\n";
Sorts::timeSort(Sorts::SelectionSort,dynArr5K,4999);

Sorts::shuffleArrays5K(arr5K, descArr5K, dynArr5K);

std::cout << "\nInsertion sort of ascending array...\n";
Sorts::timeSort(Sorts::InsertionSort,arr5K,4999);
std::cout << "\nInsertion sort of descending array...\n";
Sorts::timeSort(Sorts::InsertionSort,descArr5K,4999);
std::cout << "\nInsertion sort of random array...\n";
Sorts::timeSort(Sorts::InsertionSort,dynArr5K,4999);

            //10K size test//
std::cout << "\n10K test size for sorts....\n";

int arr10K[9999];
int descArr10K[9999];
int* dynArr10K = new int[9999];

Sorts::shuffleArrays10K(arr10K, descArr10K, dynArr10K);

std::cout << "\nBubble sort of ascending array...\n";
Sorts::timeSort(Sorts::BubbleSort,arr10K,9999);
std::cout << "\nBubble sort of descending array...\n";
Sorts::timeSort(Sorts::BubbleSort,descArr10K,9999);
std::cout << "\nBubble sort of random array...\n";
Sorts::timeSort(Sorts::BubbleSort,dynArr10K,9999);

Sorts::shuffleArrays10K(arr10K, descArr10K, dynArr10K);

std::cout << "\nSelection sort of ascending array...\n";
Sorts::timeSort(Sorts::SelectionSort,arr10K,9999);
std::cout << "\nSelection sort of descending array...\n";
Sorts::timeSort(Sorts::SelectionSort,descArr10K,9999);
std::cout << "\nSelection sort of random array...\n";
Sorts::timeSort(Sorts::SelectionSort,dynArr10K,9999);

Sorts::shuffleArrays10K(arr10K, descArr10K, dynArr10K);

std::cout << "\nInsertion sort of ascending array...\n";
Sorts::timeSort(Sorts::InsertionSort,arr10K,9999);
std::cout << "\nInsertion sort of descending array...\n";
Sorts::timeSort(Sorts::InsertionSort,descArr10K,9999);
std::cout << "\nInsertion sort of random array...\n";
Sorts::timeSort(Sorts::InsertionSort,dynArr10K,9999);

//50K size test//
std::cout << "\n50K test size for sorts....\n";

int arr50K[49999];
int descArr50K[49999];
int* dynArr50K = new int[49999];

Sorts::shuffleArrays50K(arr50K, descArr50K, dynArr50K);

std::cout << "\nBubble sort of ascending array...\n";
Sorts::timeSort(Sorts::BubbleSort,arr50K,49999);
std::cout << "\nBubble sort of descending array...\n";
Sorts::timeSort(Sorts::BubbleSort,descArr50K,49999);
std::cout << "\nBubble sort of random array...\n";
Sorts::timeSort(Sorts::BubbleSort,dynArr50K,49999);

Sorts::shuffleArrays50K(arr50K, descArr50K, dynArr50K);

std::cout << "\nSelection sort of ascending array...\n";
Sorts::timeSort(Sorts::SelectionSort,arr50K,49999);
std::cout << "\nSelection sort of descending array...\n";
Sorts::timeSort(Sorts::SelectionSort,descArr50K,49999);
std::cout << "\nSelection sort of random array...\n";
Sorts::timeSort(Sorts::SelectionSort,dynArr50K,49999);

Sorts::shuffleArrays50K(arr50K, descArr50K, dynArr50K);

std::cout << "\nInsertion sort of ascending array...\n";
Sorts::timeSort(Sorts::InsertionSort,arr50K,49999);
std::cout << "\nInsertion sort of descending array...\n";
Sorts::timeSort(Sorts::InsertionSort,descArr50K,49999);
std::cout << "\nInsertion sort of random array...\n";
Sorts::timeSort(Sorts::InsertionSort,dynArr50K,49999);

          //100K size test//
std::cout << "\n100K test size for sorts....\n";

int arr100K[99999];
int descArr100K[99999];
int* dynArr100K = new int[99999];

Sorts::shuffleArrays100K(arr100K, descArr100K, dynArr100K);


std::cout << "\nBubble sort of ascending array...\n";
Sorts::timeSort(Sorts::BubbleSort,arr100K,99999);
std::cout << "\nBubble sort of descending array...\n";
Sorts::timeSort(Sorts::BubbleSort,descArr100K,99999);
std::cout << "\nBubble sort of random array...\n";
Sorts::timeSort(Sorts::BubbleSort,dynArr100K,99999);

Sorts::shuffleArrays100K(arr100K, descArr100K, dynArr100K);

std::cout << "\nSelection sort of ascending array...\n";
Sorts::timeSort(Sorts::SelectionSort,arr100K,99999);
std::cout << "\nSelection sort of descending array...\n";
Sorts::timeSort(Sorts::SelectionSort,descArr100K,99999);
std::cout << "\nSelection sort of random array...\n";
Sorts::timeSort(Sorts::SelectionSort,dynArr100K,99999);

Sorts::shuffleArrays100K(arr100K, descArr100K, dynArr100K);

std::cout << "\nInsertion sort of ascending array...\n";
Sorts::timeSort(Sorts::InsertionSort,arr100K,99999);
std::cout << "\nInsertion sort of descending array...\n";
Sorts::timeSort(Sorts::InsertionSort,descArr100K,99999);
std::cout << "\nInsertion sort of random array...\n";
Sorts::timeSort(Sorts::InsertionSort,dynArr100K,99999);

  delete [] dynArr;
  delete [] dynArr500Hrd;
  delete [] dynArr1K;
  delete [] dynArr5K;
  delete [] dynArr10K;
  delete [] dynArr50K;
  delete [] dynArr100K;

  return 0;
}
