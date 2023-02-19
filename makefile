#makefile

LinkedList: ListMain.o NumList.o
	g++ ListMain.o NumList.o -o LinkedList

ListMain.o: ListMain.cpp NumList.h
	g++ -c ListMain.cpp

NumList.o: NumList.cpp NumList.h
	g++ -c NumList.cpp
