#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
#include "NumList.h"

using namespace std;

float randomNum()
{
    float randomNumber = (M_PI * 0.01) * rand() + 1;
    randomNumber = ceil(randomNumber * 100) / 100;
    return randomNumber;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));        // randomize RNG seed
    int size = atoi(argv[1]); // store command line argument as variable

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

    list.~NumList();

    return 0;
}