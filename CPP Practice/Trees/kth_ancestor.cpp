#include <bits/stdc++.h> 
using namespace std; 
  
// A Binary Tree Node 
struct Node 
{ 
    int data; 
    struct Node *left, *right; 
}; 
  
// temporary node to keep track of Node returned 
// from previous recursive call during backtrack 
Node* temp = NULL; 
  
// recursive function to calculate Kth ancestor 
Node* kthAncestorDFS(Node *root, int node , int &k) 
{    
    if(!root) return root;
    if(root->data == node ) 
}  
  
// Utility function to create a new tree node 
Node* newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    // Let us create binary tree shown in above diagram 
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
  
    int k = 2; 
    int node = 3; 
  
    // print kth ancestor of given node 
    Node *res = kthAncestorDFS(root,node,k); 
    cout<<"-1";
      
    return 0; 
} 