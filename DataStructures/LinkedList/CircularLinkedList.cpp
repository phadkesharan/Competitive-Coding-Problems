#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;

    node(int nodeData) {
        data = nodeData;
    }

};

void displayList(node *head) {
    node* temp = head;

    do{
        cout <<temp->data <<" ";
        temp = temp->next;
    }
    while(temp!=head);

    cout <<endl;
}

node* insertAtBeginning(node* head, int data) {
    node *end=head, *temp = head;

    while(end->next != head) {
        end = end->next;
    }

    node *newNode = new node(data);
    end->next = newNode;
    newNode->next = head;

    head = newNode;
    return head;
}

node* insertAtEnd(node* head, int data) {
    node* temp = head, *start=head;

    while(temp->next != head) {
        temp = temp->next;
    }

    node* newNode = new node(data);

    temp->next = newNode;
    newNode->next = start;

    return head;
}


int main() {

    node *head, *one, *two, *three;

    one = new node(1);
    two = new node(2);
    three = new node(3);

    one->next = two;
    two->next = three;
    three->next = one;

    head = one;

    displayList(head);

    head = insertAtBeginning(head, 100);
    displayList(head);

    head = insertAtEnd(head, 200);
    displayList(head);
}