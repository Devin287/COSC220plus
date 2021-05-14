all:	Lab-3

Lab-3:	main.o Heapsort.o
				g++ -o main main.o Heapsort.o -std=c++11

main.o:	main.cpp Heapsort.h
				g++ -c main.cpp -std=c++11

Heapsort.o:	Heapsort.cpp Heapsort.h
				g++ -c Heapsort.cpp -std=c++11

clean:
				-rm *.o $(objects)
