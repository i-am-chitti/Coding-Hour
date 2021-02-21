#include<bits/stdc++.h>
using namespace std;

struct node 
{ 
   int data; 
   struct node* left; 
   struct node* right; 
}; 

struct node* newnode(int data) 
{ 
  struct node* node = (struct node*) 
                       malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  
  return(node); 
} 

bool printAncestors(node *root, int val) {
    /*
    first method
    if(!root) return 0;
    else if(root->data == val) return root;
    node* tmp = printAncestors(root->left, val);
    if(tmp) { cout<<root->data<<"\t";
        return tmp;
    }
    tmp = printAncestors(root->right, val);
    if(tmp) { cout<<root->data<<"\t";
        return tmp;
    }
    */
    if(!root) return 0;
    if(root->data == val) return 1;
    if(printAncestors(root->left, val) || printAncestors(root->right, val)) {
        cout<<root->data<<"\t";
        return 1;
    }
    else return 0;
}

int main() 
{ 
  struct node *root = newnode(1); 
  root->left        = newnode(2); 
  root->right       = newnode(3); 
  root->left->left  = newnode(4); 
  root->left->right = newnode(5); 
  root->left->left->left  = newnode(7); 
  
  printAncestors(root, 7); 
  
  return 0; 
} 