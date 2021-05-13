/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

// A binary tree node
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data=x;
        left=right=0;
    }
};

// A utility function to allocate a new node
Node* newNode(int data)
{
    return new Node(data);
}

void inorder(Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* deleteLeaves(Node *root, int x) {
    if(!root) return root;
    root->left = deleteLeaves(root->left,x);
    root->right = deleteLeaves(root->right,x);
    if(root->data == x && !root->left && !root->right) return 0;
    else return root; 
}
 

int main()
{
    // Node* root = newNode(10);
    // root->left = newNode(3);
    // root->right = newNode(10);
    // root->left->left = newNode(3);
    // root->left->right = newNode(1);
    // root->right->right = newNode(3);
    // root->right->right->left = newNode(3);
    // root->right->right->right = newNode(3);
    // deleteLeaves(root, 3);
    // cout << "Inorder traversal after deletion : ";
    // inorder(root);
    return 0;
}