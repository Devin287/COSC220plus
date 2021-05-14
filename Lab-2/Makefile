all:	Lab-2

Lab-2:	main.o Sorts.o
				g++ -o main main.o Sorts.o -std=c++11

main.o:	main.cpp Sorts.h
				g++ -c main.cpp -std=c++11

Sorts.o:	Sorts.cpp Sorts.h
				g++ -c Sorts.cpp -std=c++11

clean:
				-rm *.o $(objects)
