#include <bits/stdc++.h>
using namespace std;

struct node  {
    int data;
    struct node *next;

    node(int nodeData) {
        data = nodeData;
        next = NULL;
    }

    node(int nodeData, node* nextNode) {
        data = nodeData;
        next = nextNode;
    }
};


void printList(struct node* head) {
    struct node* temp = head;

    while(temp) {
        cout <<temp->data <<" ";
        temp = temp->next;
    }
    cout <<endl;
}

// insert at the Beginning
node* insertAtBeginning(node* head, int value) {
    node *newNode = new node(value);
    newNode->next = head;
    head = newNode;
    return head;

}

// insert at the end
node* insertAtEnd(node *head, int value) {
    node *newNode = new node(value);

    if(head == NULL) {
        head = newNode;
        return head;
    }

    node* temp = head;

    while(temp->next) {
        temp = temp->next;
    }

    temp->next = newNode;

    return head;
}

// insert in middle
node* insertAtIndex(node *head, int value, int index) {
    node* temp = head;
    node* newNode = new node(value);

    if(head == NULL) {
        head = newNode;
        return head;
    }

    for(int i=0;i<index;i++) {

        if(temp==NULL) {
            cout <<"index out of range!!" <<endl;
            return head;
        }

        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// delete from beginning
node* deleteFromBeginning(node* head) {
    node* deletedNode = head;
    head = head->next;

    free(deletedNode);

    return head;
}

// delete from the end
node* deleteFromEnd(node* head) {
    node* temp = head;

    while(temp->next && temp->next->next) {
        temp = temp->next;
    }

    node* deletedNode = temp->next;
    temp->next = NULL; 
}


int main() {

    struct node* head;
    struct node *node1 = new node(4);
    struct node *node2 = new node(5);
    struct node *node3 = new node(6);
    struct node *node4 = new node(7);
    struct node *node5 = new node(8);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    head = node1;

    // printList(head);
    // head = insertAtBeginning(head, 100);
    // head = insertAtEnd(head, 200);
    // printList(head);

    // node* head2=NULL;
    // head2 = insertAtEnd(head2, 100);
    // head2 = insertAtEnd(head2, 1000);
    // printList(head2);

    printList(head);
    head = insertAtIndex(head, 4004, 0);
    printList(head);
}