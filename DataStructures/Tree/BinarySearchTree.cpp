#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node *root) {
    if(root != NULL) {
        inOrder(root->left);
        cout <<root->data <<" ";
        inOrder(root->right);
    }
}

bool BSTSearch(Node *root, int x) {
    if(root == NULL)
        return false;

    if(x > root->data)
        return BSTSearch(root->right, x);

    else if(x < root->data)
        return BSTSearch(root->left, x);

    return true;
}

int getMax(Node* root) {

    if(root == NULL)
        return -1;
    Node* temp = NULL;
    while (root != NULL) {
        temp = root;
        root = root->right;
    }

    return temp->data;
}

int getMin(Node* root) {

    if(root == NULL)
        return -1;
    Node* temp = NULL;
    while (root != NULL) {
        temp = root;
        root = root->left;
    }

    return temp->data;
}

Node* insert(Node *root, int newData) {

    if(root == NULL) {
        Node *newNode = new Node(newData);
        root = newNode;
        return root;
    }

    if(newData > root->data) {
        root->right = insert(root->right, newData);
    }

    else if(newData < root->data) {
        root->left = insert(root->left, newData);
    }

    return root;
}

int main() {
    Node *root;

    root = new Node(7);
    root->left = new Node(4);
    root->right = new Node(9);
    root->left->left = new Node(2);
    root->left->right = new Node(5);

    insert(root, 6);
    inOrder(root);
}



