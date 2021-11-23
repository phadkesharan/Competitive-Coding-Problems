#include <bits/stdc++.h>
using namespace std;

class DLLNode {
    public:
    int data;
    DLLNode *next, *prev;

    DLLNode(int nodeData) {
        data = nodeData;
        next = NULL;
        prev = NULL;
    }

    DLLNode(int nodeData, DLLNode *nextNode) {
        data = nodeData;
        next = nextNode;
        prev = NULL;
    }

    DLLNode(int nodeData, DLLNode *nextNode, DLLNode *prevNext) {
        data =nodeData;
        next = nextNode;
        prev = prevNext;
    }
};

class DLL {

public:
    DLLNode *head;

    DLL(DLLNode *headNode) {
        head = headNode;
    }

    void printList() {

        while(head!=NULL) {
            cout <<head->data <<" ";
            head = head->next;
        }
    }

    void insertAtBeginning(int value) {
        DLLNode *temp = head;
        DLLNode *newNode = new DLLNode(value);

        if(head == NULL) {
            cout <<"List is empty!" <<endl;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;

    }

};

int main() {
    DLLNode *head;
    DLL list(head);

    list.insertAtBeginning(100);
    list.insertAtBeginning(200);
    list.insertAtBeginning(300);

    list.printList();
}
