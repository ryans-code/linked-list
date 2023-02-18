#makefile

a.out: ListMain.o NumList.o
	g++ ListMain.o NumList.o

ListMain.o: ListMain.cpp NumList.h
	g++ -c ListMain.cpp

NumList.o: NumList.cpp NumList.h
	g++ -c NumList.cpp
