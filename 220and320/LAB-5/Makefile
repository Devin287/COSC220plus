all:	Lab-5

Lab-5:	main.o heapQ.o
				g++ -o main main.o heapQ.o -std=c++11

main.o:	main.cpp heapQ.h
				g++ -c main.cpp -std=c++11

heapQ.o:	heapQ.cpp heapQ.h
				g++ -c heapQ.cpp -std=c++11

clean:
				-rm *.o $(objects)
