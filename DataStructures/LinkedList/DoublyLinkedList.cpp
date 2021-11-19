#include <bits/stdc++.h>
using namespace std;

//Doubly LinkedList Node
struct node {
    int data;
    node* next;
    node* prev;

    node(int nodeData) {
        data = nodeData;
        next = NULL;
        prev = NULL;
    }
};

void printList(node* head) {

    while(head != NULL) {
        cout <<head->data <<" ";
        head = head->next;
    }
    cout <<endl;
}

void printListRev(node* tail) {
    node* temp = tail;

    while(temp!=NULL) {
        cout <<temp->data <<" ";
        temp = temp->prev;
    }
}

node* insertAtBeginning(node* head, int value) {
    node* newNode = new node(value);

    if(head == NULL) {
        head = newNode;
        return head;
    }
    newNode->prev = NULL;
    newNode->next = head;

    head = newNode;
    return head;
}

node* insertAtEnd(node* head, int value) {
    node* newNode = new node(value);

    if(head == NULL) 
        return insertAtBeginning(head, value);

    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = NULL;
    newNode->prev = temp;

    return head;
}

node* insertAtIndex(node* head, int value, int index) {
    node* newNode = new node(value);
    node* temp = head;

    if(head == NULL) 
        return insertAtBeginning(head, value);

    if(index == 0)
        return insertAtBeginning(head, value);

    for(int i=0;i<index;i++) {
        if(temp == NULL) {
            cout <<"index out of range" <<endl;
            return head;
        }
        temp = temp->next;
    }

    temp->prev->next = newNode;
    newNode->next = temp;

    newNode->prev = temp->prev;
    temp->prev = newNode;

    return head;

}


int main() {
    node *head, *node1, *node2, *node3, *node4;

    node1 = new node(10);
    node2 = new node(20);
    node3 = new node(30);
    node4 = new node(40);

    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = NULL;

    head = node1;

    // printList(head);
    printListRev(node4);

    //insertAtBeginning
    // head = insertAtBeginning(head, 100);
    // printList(head);

    // //insertAtBeginning
    // head = insertAtEnd(head, 200);
    // printList(head);

    // head = insertAtIndex(head, 200 ,2);
    // head = insertAtIndex(head, 1000, 0);
    // printList(head);
    // printListRev(head);

}