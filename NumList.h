#include <iostream>

using namespace std;

class NumList
{
private:
    struct Node
    {
        double data;
        Node *next;
    };
    Node *head;

public:
    NumList();
    ~NumList();

    void appendNode(double);
    void sortList();
    void insertNode(double);
    void deleteNode(double);
    void reverseList();
    void displayList();
};
