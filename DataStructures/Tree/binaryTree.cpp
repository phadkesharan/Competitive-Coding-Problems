#include <bits/stdc++.h>
using namespace std;

struct binaryTreeNode {

    int data;
    binaryTreeNode *left, *right;

    binaryTreeNode(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

binaryTreeNode* createNode(int a) {
    binaryTreeNode *newNode = new binaryTreeNode(a);
    return newNode;
}

void inOrder(binaryTreeNode *root) {
    if(root!=NULL) {
        inOrder(root->left);
        cout <<root->data <<" ";
        inOrder(root->right);
    }
}

void preOrder(binaryTreeNode *root) {
    if(root!=NULL) {
        cout <<root->data <<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void levelOrder(binaryTreeNode *root) {
    queue <binaryTreeNode*> q;

    if(root == NULL) return;
    q.push(root);

    while(!q.empty()) {
        binaryTreeNode *temp = q.front();
        q.pop();
        cout <<temp->data <<" ";
        if(temp->left != NULL)
            q.push(temp->left);

        if(temp->right != NULL)
            q.push(temp->right);

    }

}

void levelOrderRev(binaryTreeNode* root) {
    queue <binaryTreeNode*> q;

    if(root == NULL) return;
    q.push(root);

    while(!q.empty()) {
        binaryTreeNode *temp = q.front();
        q.pop();
        cout <<temp->data <<" ";

        if(temp->right != NULL)
            q.push(temp->right);
        if(temp->left != NULL)
            q.push(temp->left);

    }
}

int getHeight(binaryTreeNode *root) {

    if(root!=NULL) {
        return max(getHeight(root->left), getHeight(root->right)) + 1;
    }

    return 0;
}

int main() {

    binaryTreeNode *root;
    root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // inOrder(root);
    // cout <<endl;
    // preOrder(root);
    // cout <<endl;
    levelOrderRev(root);
    cout <<endl;
    levelOrder(root);
    cout <<endl;
}