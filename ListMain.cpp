#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
#include "NumList.h"

using namespace std;

float randomNum()
{
    float randomNumber = 1 + (M_PI) * (rand() % 1000);
    randomNumber = ceil(randomNumber * 100) / 100;
    return randomNumber;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));        // randomize RNG seed
    int size = atoi(argv[1]); // store command line argument as variable
    
    if (size < 1)
    {
        cout << "Program should be run with command line argument, " << endl
             << "try './a.out x' where x is an integer number greater than 0." << endl;
        return -1;
    }

    NumList list;

    for (int i = 0; i < size; i++)
    {
        list.appendNode(randomNum());
    }

    cout << endl
         << "-----random list-----" << endl;
    list.displayList();

    list.sortList();
    cout << endl
         << "-----sorted list-----" << endl;
    list.displayList();

    list.reverseList();
    cout << endl
         << "-----reversed list-----" << endl;
    list.displayList();
    cout << endl;

    list.~NumList();

    return 0;
}
