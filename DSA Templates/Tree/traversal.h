#include "Node.h"
void preOrderTraverse(Node *root) {
    if(!root) return;
    cout<<root->data<<" ";
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}

void postOrderTraverse(Node *root) {
    if(!root) return;
    postOrderTraverse(root->left);
    postOrderTraverse(root->right);
    cout<<root->data<<" ";
}

void inOrderTraverse(Node *root) {
    if(!root) return;
    inOrderTraverse(root->left);
    cout<<root->data<<" ";
    inOrderTraverse(root->right);
}

void MorrisForwardInorderTraverse(Node *root) {
    Node *curr=0,*predecessor=0;
    while(curr) {
        if(!curr->left) {
            //process node
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else {
            predecessor=curr->left;
            while(predecessor->right && predecessor->right!=curr) predecessor=predecessor->right;
            if(!predecessor->right) {
                predecessor->right=curr;
                curr=curr->left;
            }
            else {
                //process node
                cout<<curr->data<<" ";
                predecessor->right=0;
                curr=curr->right;
            }
        }
    }
}

void MorrisReverseInorderTraverse(Node *root) {
    Node *curr=root,*successor=0;
    while(curr) {
        if(!curr->right) {
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        else {
            successor=curr->right;
            while(successor->left && successor->left!=curr) successor=successor->left;
            if(!successor->left) {
                successor->left=curr;
                curr=curr->right;
            }
            else {
                cout<<curr->data<<" ";
                successor->left=0;
                curr=curr->left;
            }
        }
    }
}