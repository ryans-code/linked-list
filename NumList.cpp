#include <iostream>
#include "NumList.h"

using namespace std;

NumList::NumList()
{
    head = NULL;
}

NumList::~NumList()
{
    Node *p = head;
    Node *n;

    while (p)
    {
        n = p->next;
        delete p;
        p = n;
    }
}

void NumList::appendNode(double num)
{
    Node *newNode = new Node;
    newNode->data = num;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *p = head;

        while (p->next)
        {
            p = p->next;
        }

        p->next = newNode;
    }
}

void NumList::sortList()
{
    if (head == NULL)
    {
        return;
    }

    Node *p = head;
    Node *n;
    double temp;

    while (p)
    {
        n = p->next;
        while (n)
        {
            if (p->data > n->data)
            {
                temp = p->data;
                p->data = n->data;
                n->data = temp;
            }
            n = n->next;
        }
        p = p->next;
    }
}

void NumList::insertNode(double num)
{
    Node *newNode = new Node;
    newNode->data = num;

    Node *p;
    Node *n;

    p = head;
    while (p && p->data < num)
    {
        n = p;
        p = p->next;
    }

    if (p == head)
    {
        head = newNode;
        newNode->next = p;
    }
    else
    {
        n->next = newNode;
        newNode->next = p;
    }
}

void NumList::deleteNode(double num)
{
    Node *p = head;
    Node *n;

    while (p && p->data != num)
    {
        n = p;
        p = p->next;
    }

    if (p)
    {
        if (p == head)
        {
            head = p->next;
            delete p;
        }
        else
        {
            n->next = p->next;
            delete p;
        }
    }
}

void NumList::reverseList()
{
    Node *p = head;
    Node *n = NULL;
    Node *prev = NULL;

    while (p)
    {
        n = p->next;
        p->next = prev;
        prev = p;
        p = n;
    }
    head = prev;
}

void NumList::displayList()
{
    if (head == NULL)
    {
        return;
    }

    Node *p = head;

    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}