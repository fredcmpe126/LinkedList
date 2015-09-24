#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "Node.h"
using namespace std;
class LinkedList {
public:
    LinkedList();
    void AppendToEnd(int);
    void AppendToBeginning(int);
    void RemoveLast();
    void RemoveFirst();
    int GetMiddle();
    void SplitList(LinkedList&, LinkedList&);
    void PrintList();
private:
    Node* head;
};

#endif
