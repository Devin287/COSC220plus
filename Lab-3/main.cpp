//Devin Schmidt
//Lab-3
//COSC-320

#include "Heapsort.h"
#include <iostream>
#include<time.h>
#include<chrono>
using namespace std;

int main(){

  /*
  *  I started the lab late and resorted to this.
  *  I'm not proud of myself.
  */
            //100Hrd size test//
std::cout << "\n100Hrd test size for sorts....\n";
int arr[99];
int descArr[99];
int* dynArr = new int[99];
srand(time(NULL));
Heapsort sort;

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



              //100K size test//
std::cout << "\n100K test size for sorts....\n";

int* dynArr100K = new int[99999];
int arr100K[99999];
int descArr100K[99999];
srand(time(NULL));

cout << "\nDescending\n";
auto start3 = chrono::system_clock::now();
sort.HeapSort(arr100K,99999);
auto end3 = chrono::system_clock::now();
chrono::duration<double> elapsed3_seconds = end3-start3;
time_t end3_time = chrono::system_clock::to_time_t(end3);
cout << "finished at " << ctime(&end3_time)
     << "elapsed time: " << elapsed3_seconds.count() << "s\n";

auto start4 = chrono::system_clock::now();
sort.HeapSort(descArr100K,99999);
auto end4 = chrono::system_clock::now();
chrono::duration<double> elapsed4_seconds = end4-start4;
time_t end4_time = chrono::system_clock::to_time_t(end4);
cout << "finished at " << ctime(&end4_time)
     << "elapsed time: " << elapsed4_seconds.count() << "s\n";

auto start5 = chrono::system_clock::now();
sort.HeapSort(dynArr100K,99999);
auto end5 = chrono::system_clock::now();
chrono::duration<double> elapsed5_seconds = end5-start5;
time_t end5_time = chrono::system_clock::to_time_t(end5);
cout << "finished at " << ctime(&end5_time)
     << "elapsed time: " << elapsed5_seconds.count() << "s\n";

          //600K size test//
std::cout << "\n600K test size for sorts....\n";

int* dynArr600K = new int[599999];
int arr600K[599999];
int descArr600K[599999];
srand(time(NULL));

cout << "\nRandomized\n";
auto start6 = chrono::system_clock::now();
sort.HeapSort(arr600K,599999);
auto end6 = chrono::system_clock::now();
chrono::duration<double> elapsed6_seconds = end6-start6;
time_t end6_time = chrono::system_clock::to_time_t(end6);
cout << "finished at " << ctime(&end6_time)
     << "elapsed time: " << elapsed6_seconds.count() << "s\n";

 auto start7 = chrono::system_clock::now();
 sort.HeapSort(descArr600K,599999);
 auto end7 = chrono::system_clock::now();
 chrono::duration<double> elapsed7_seconds = end7-start7;
 time_t end7_time = chrono::system_clock::to_time_t(end7);
 cout << "finished at " << ctime(&end7_time)
      << "elapsed time: " << elapsed7_seconds.count() << "s\n";

 auto start8 = chrono::system_clock::now();
 sort.HeapSort(dynArr600K,599999);
 auto end8 = chrono::system_clock::now();
 chrono::duration<double> elapsed8_seconds = end8-start8;
 time_t end8_time = chrono::system_clock::to_time_t(end8);
 cout << "finished at " << ctime(&end8_time)
      << "elapsed time: " << elapsed8_seconds.count() << "s\n";

      delete [] dynArr;
      delete [] dynArr100K;
      delete [] dynArr600K;

  return 0;
}
