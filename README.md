# linked-list
Linked List data structure and functions in C++

- Class is defined in the NumList.h file
- Functions are defined in the NumList.cpp file
- Main is in ListMain.cpp

A makefile is included for compilation on Linux, if using Linux just clone the repo and type 'make'.
After typing 'make,' the executable will be created. This program takes a command line argument to be used for list size creation.
For example, running './a.out 10' will create a list of size 10.

In main, a randomly generated list will be created (specified by CLI argument), then sorted, then reversed, and printed to the screen at each step.
The list is destroyed before the progam exits.
Functions for insertNode and deleteNode are defined but not implemented in Main at this time. Feel free to try them out if you wish.
