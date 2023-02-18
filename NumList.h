#include <iostream>

using namespace std;

class NumList
{
private:
    struct Node
    {
        float data;
        Node *next;
    };
    Node *head;

public:
    NumList();
    ~NumList();

    void appendNode(float);
    void sortList();
    void insertNode(float);
    void deleteNode(float);
    void reverseList();
    void displayList();
    bool contains(float);
};