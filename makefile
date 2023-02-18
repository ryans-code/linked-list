#makefile

a.out: listmain.o numlist.o
	g++ listmain.o numlist.o

listmain.o: ListMain.cpp NumList.h
	g++ -c ListMain.cpp

numlist.o: NumList.cpp NumList.h
	g++ -c NumList.cpp
