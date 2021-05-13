/*
Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int val) {
        data=val;
        left=right=0;
    }
};

/*
-> If valid three nodes (root,left,right) returning left tree size+right tree size+1
-> if not a valid tree, returning 0
-> checking each time, if current root node can form valid or BST
*/
int helper(Node *root, int &res) {
    if(!root) return 1;
    int lValidSize = helper(root->left,res);
    int rValidSize = helper(root->right,res);
    if(lValidSize==0 || rValidSize==0) return 0;   // if any of two subtree is invalid, current tree can't be BST
    if(root->left && root->right) {
        if(root->left->data<root->data && root->right->data>root->data) {
            res=max(res,lValidSize+rValidSize+1);
            return lValidSize+rValidSize+1;
        }
        else return 0; // can't be a valid BST
    }
    else if(root->left) {
        if(root->left->data<root->data) {  // a valid left subtree
            res=max(res,lValidSize+1);
            return lValidSize+1;
        }
        else return 0;
    }
    else if(root->right) {
        if(root->right->data>root->data) {  // a valid right subtree
            res=max(res,rValidSize+1);
            return rValidSize+1;
        }
        else return 0;
    }
    else return 1;  // a single node with no children
}

int largestBst(Node *root)
{
	int res=1;
	helper(root,res);
	return res;
}
 

int main()
{
    
    return 0;
}