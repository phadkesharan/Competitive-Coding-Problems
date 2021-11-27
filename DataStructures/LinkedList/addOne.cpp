#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int nodeData) {
        data = nodeData;
    }
};

SinglyLinkedListNode *reverseList(SinglyLinkedListNode *head) {
    SinglyLinkedListNode *curr = head,*p = NULL, *n = NULL;

    while(curr!=NULL) {
        n = curr->next;

        curr->next = p;
        p = curr;
        curr = n;
    }

    return p;
}

void display(SinglyLinkedListNode *head) {
    SinglyLinkedListNode *temp = head;

    while(temp!=NULL) {
        cout <<temp->data <<" ";
        temp = temp->next;        
    }

    cout <<endl;
}

SinglyLinkedListNode *addOneToList(SinglyLinkedListNode *head)
{
    // write your code here
    SinglyLinkedListNode * temp=head;
    int num=0;
    
    while(temp!=NULL) {
      num = num*10 + temp->data;
      temp = temp->next;
    }
    
    num++;
    cout <<num <<endl;
    SinglyLinkedListNode *newTemp, *newHead, *newNode;

    newTemp = NULL;
    newHead = NULL;
    while(num>0) {
        int d = num%10;
        newNode = new SinglyLinkedListNode(d);
        if(newHead == NULL) {
            newHead = newNode;
            newTemp = newHead;
        }
        else {
            newTemp->next = newNode;
            newTemp = newNode;
        }

        num /= 10;
    }

    newTemp->next = NULL;
    
    return reverseList(newHead);
}

int main() {
    SinglyLinkedListNode *head, *n1, *n2, *n3, *newHead;

    n1 = new SinglyLinkedListNode(9);
    n2 = new SinglyLinkedListNode(9);
    n3 = new SinglyLinkedListNode(9);

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;
    display(head);

    newHead = addOneToList(head);
    display(newHead);
}