//Devin Schmidt
//Lab-5
//COSC-320

#include "heapQ.h"
#include <iostream>
#include<time.h>
#include<chrono>

int main(){
  //100Hrd size test//
std::cout << "\n100Hrd test size for sorts....\n";
int arr[4];
int descArr[99];
int* dynArr = new int[99];
srand(time(NULL));

HeapQ sort(10);

  sort.insert(20,20);
  //sort.insert(20,20);
  //sort.insert(A, 1,20);

  //sort.printHeap(A,20);
  //std::cout << "Here:" << A[0];


/*
sort.shuffleArrays(arr, descArr, dynArr, 99);

cout << "Ascending\n";
auto start = chrono::system_clock::now();
sort.HeapSort(arr,99);
auto end = chrono::system_clock::now();
chrono::duration<double> elapsed_seconds = end-start;
time_t end_time = chrono::system_clock::to_time_t(end);
cout << "finished at " << ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";

auto start1 = chrono::system_clock::now();
sort.HeapSort(descArr,99);
auto end1 = chrono::system_clock::now();
chrono::duration<double> elapsed1_seconds = end1-start1;
time_t end1_time = chrono::system_clock::to_time_t(end1);
cout << "finished at " << ctime(&end1_time)
<< "elapsed time: " << elapsed1_seconds.count() << "s\n";

auto start2 = chrono::system_clock::now();
sort.HeapSort(dynArr,99);
auto end2 = chrono::system_clock::now();
chrono::duration<double> elapsed2_seconds = end2-start2;
time_t end2_time = chrono::system_clock::to_time_t(end2);
cout << "finished at " << ctime(&end2_time)
<< "elapsed time: " << elapsed2_seconds.count() << "s\n";

sort.printHeap(arr,99);
*/
return 0;
}
