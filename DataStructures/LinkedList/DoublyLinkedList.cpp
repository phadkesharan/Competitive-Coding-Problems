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

node* deleteFromBeginning(node* head) {
    node* temp = head;

    head = temp->next;
    head->prev = NULL;
    free(temp);
    return head;
}

node* deleteFromEnd(node* head) {
    node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);
    return head;
}

node* deleteFromIndex(node *head, int index) {
    node* temp = head;

    if(index == 0) {
        return deleteFromBeginning(head);
    }

    for(int i=0;i<index;i++) {
        temp  = temp->next;
    }

    if(temp->next == NULL) {
        return deleteFromEnd(head);
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);

    return head;
}

node* deleteElement(node *head, int elem) {
    node* temp = head;

    if(head == NULL) {
        cout <<"the list is empty!" <<endl;
        return head;
    }

    if(head->data == elem) {
        return deleteFromBeginning(head);
    }

    while(temp->next!= NULL) {
        if(temp->data == elem) {
            node* p = temp->prev;
            p->next = temp->next;
            temp->next->prev = p;

            return head;
        }

        temp = temp->next;
    }

    if(temp->data == elem){
        return deleteFromEnd(head);
    }

    cout <<"this element is not present in the linkedList" <<endl;
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
    printList(head);

    // head = deleteElement(head, 10);
    // printList(head);

    // head = deleteFromBeginning(head);
    // printList(head);
    // head = deleteFromEnd(head);
    // printList(head);

    head = deleteFromIndex(head, 0);
    printList(head);
    head = deleteFromIndex(head, 2);
    printList(head);

    // printList(head);
    // printListRev(node4);

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