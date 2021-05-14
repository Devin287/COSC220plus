all:	Lab-1

Lab-1:	main.o Sorts.o
				g++ -o main main.o Sorts.o -std=c++11 -g

main.o:	main.cpp Sorts.h
				g++ -c main.cpp -std=c++11 -g

Sorts.o:	Sorts.cpp Sorts.h
				g++ -c Sorts.cpp -std=c++11 -g

clean:
				-rm *.o $(objects)
