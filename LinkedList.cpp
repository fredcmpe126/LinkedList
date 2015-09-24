#include "LinkedList.h"
LinkedList::LinkedList(){
    head = NULL;
}

void LinkedList::AppendToEnd(int new_data){
    if(head == NULL){
        head = new Node(new_data);
    }
    else{
        Node* trav = head;
        while(trav->next != NULL){
            trav = trav->next;
        }
        trav->next = new Node(new_data);
    }
}

void LinkedList::PrintList(){
    Node* trav = head;
    while(trav != NULL){
        cout << trav->data << endl;
        trav = trav->next;
    }
}

//FILL OUT THE REST OF YOUR FUNCTIONS BELOW
