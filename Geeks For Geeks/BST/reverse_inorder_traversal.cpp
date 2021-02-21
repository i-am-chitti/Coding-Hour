// CPP code for reverse Morris Traversal 
#include<bits/stdc++.h> 

using namespace std; 

// Node structure 
struct Node { 
	int data; 
	Node *left, *right; 
}; 

// helper function to create a new node 
Node *newNode(int data){ 
	Node *temp = new Node; 
	
	temp->data = data; 
	temp->right = temp->left = NULL; 

	return temp; 
} 

// function for reverse inorder traversal 
void MorrisReverseInorder(Node *root) 
{ 
	Node *curr=root,*successor=0;
    while(curr) {
        if(!curr->right) {
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        else {
            successor=curr->right;
            while(successor->left && successor->left!=curr) {
                successor=successor->left;
            }
            if(!successor->left) {
                successor->left=curr;
                curr=curr->right;
            }
            else {
                cout<<curr->data<<" ";
                curr=curr->left;
                successor->left=0;
            }
        }
    }
} 

// Driver code 
int main() 
{ 

/* Constructed binary tree is 
		1 
		/ \ 
	2	 3 
	/ \ / \ 
	4 5 6 7 
*/

Node *root = newNode(5); 
root->left = newNode(1); 
root->right = newNode(10); 
root->left->left = newNode(0); 
root->left->right = newNode(3); 
root->right->left = newNode(8); 
root->right->right = newNode(17); 

//reverse inorder traversal. 
MorrisReverseInorder(root); 

return 0; 
} 
