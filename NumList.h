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
<<<<<<< HEAD
    bool contains(float);
};
=======
};
>>>>>>> ec548e09058e64f85c0136f67d5d8546d098904f
