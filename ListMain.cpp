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

void display()
{
    cout << endl
         << "Menu:" << endl
         << endl
         << "  [1]: Display the List" << endl
         << "  [2]: Sort the List" << endl
         << "  [3]: Reverse the List" << endl
         << "  [4]: Append a node to the end of the List" << endl
         << "  [5]: Insert a node into sorted position" << endl
         << "  [6]: Remove a node from the List" << endl
         << "  [0]: Exit"
         << endl;
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

    if (size < 1)
    {
        cout << "Program should be run with command line argument, " << endl
             << "try './Linked-List.exe x' where x is an integer number greater than 0." << endl;
        return -1;
    }

    NumList list;

    for (int i = 0; i < size; i++)
    {
        list.appendNode(randomNum());
    }

    display();
    int userSelection = 0;
    bool isSorted = false;
    cout << endl
         << "Please make a selection: ";
    cin >> userSelection;

    while (userSelection < 0 || userSelection > 6)
    {
        cout << "Make a valid selection: ";
        cin >> userSelection;
    }

    while (userSelection != 0)
    {
        switch (userSelection)
        {
        case 1:
            cout << endl
                 << "Displaying List: " << endl
                 << endl;
            list.displayList();
            break;
        case 2:
            cout << endl
                 << "List has been sorted!" << endl;
            list.sortList();
            isSorted = true;
            break;
        case 3:
            cout << endl
                 << "List has been reversed!" << endl;
            list.reverseList();
            break;
        case 4:
            double appendNum;
            cout << endl
                 << "Enter a number to append: ";
            cin >> appendNum;
            list.appendNode(appendNum);
            isSorted = false;
            cout << endl
                 << appendNum << " has been appended to the list!" << endl;
            break;
        case 5:
            if (isSorted == false)
            {
                char userYorN;
                cout << endl
                     << "The list must be sorted before inserting a new node into position." << endl
                     << endl
                     << "Sort now? (Y or N): ";
                cin >> userYorN;
                while (userYorN != 'y' && userYorN != 'Y' && userYorN != 'n' && userYorN != 'N')
                {
                    cout
                        << "Make a valid selection: ";
                    cin >> userYorN;
                }
                if (userYorN == 'y' || userYorN == 'Y')
                {
                    list.sortList();
                    cout << endl
                         << "List has been sorted!";
                    isSorted = true;

                    double insertNum;
                    cout << endl
                         << "Enter a number to insert: ";
                    cin >> insertNum;
                    list.insertNode(insertNum);
                    cout << endl
                         << insertNum << " has been inserted!" << endl;
                }
                else
                {
                    break;
                }
            }
            else
            {
                double insertNum;
                cout << endl
                     << "Enter a number to insert: ";
                cin >> insertNum;
                list.insertNode(insertNum);
                cout << endl
                     << insertNum << " has been inserted!" << endl;
            }
            break;
        case 6:
            double removeNum;
            cout << endl
                 << "Enter a number to remove: ";
            cin >> removeNum;
            if (list.contains(removeNum))
            {
                list.deleteNode(removeNum);
                cout << endl
                     << removeNum << " has been removed from the list!" << endl;
            }
            else
                cout << "That number is not in the list!";
            break;
        }

        display();
        cout << endl
             << "Please make a selection: ";
        cin >> userSelection;

        while (userSelection < 0 || userSelection > 6)
        {
            cout << "Make a valid selection: ";
            cin >> userSelection;
        }
    }

    cout << endl << "gg" << endl << endl;

    return 0;
}
