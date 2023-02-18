#makefile

<<<<<<< HEAD
a.out: listmain.o numlist.o
	g++ listmain.o numlist.o

listmain.o: ListMain.cpp NumList.h
	g++ -c ListMain.cpp

numlist.o: NumList.cpp NumList.h
	g++ -c NumList.cpp
=======
a.out: ListMain.o NumList.o
        g++ ListMain.o NumList.o

ListMain.o: ListMain.cpp NumList.h
        g++ -c ListMain.cpp

NumList.o: NumList.cpp NumList.h
        g++ -c NumList.cpp
>>>>>>> ec548e09058e64f85c0136f67d5d8546d098904f
