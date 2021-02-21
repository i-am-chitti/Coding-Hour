#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *left, *right;
    Node(int x) {
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* insertNode(Node *root, int &data) {
    if(!root) return new Node(data);
    if(root->val>data) root->left = insertNode(root->left, data);
    else root->right = insertNode(root->right, data);
    return root;
}

//O(n*logn) running time
Node* constructBST(vector<int> &preorder) {
    Node* root = new Node(preorder[0]);
    for(int i=1;i<preorder.size();i++) insertNode(root, preorder[i]);
    return root;
}

//util () for constructBST2
Node* constructBSTUtil(vector<int> &preorder, int *preIndex, int key, int min, int max, int size) {

    if(*preIndex>=size) return 0;
    Node *root = nullptr;
    if(key>min && key<max) {
        //key will be inserted
        root = new Node(key);
        *preIndex = *preIndex+1;
        if(*preIndex<size) root->left = constructBSTUtil(preorder, preIndex, preorder[*preIndex], min, key, size);
        if(*preIndex<size) root->right = constructBSTUtil(preorder, preIndex, preorder[*preIndex], key, max, size);
    }
    return root;

}   

//O(n) running time
Node* constructBST2(vector<int> &preorder) {
    int preIndex = 0;
    return constructBSTUtil(preorder, &preIndex, preorder[0], INT_MIN, INT_MAX, preorder.size());
}

void postorderTraversal(Node *root) {
    if(!root) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->val<<" ";
}

int main() {
    vector<int> preorder = {10,5,1,7,40,50}; //post order = {1,7,5,50,40,10}
    Node *root = constructBST2(preorder);
    postorderTraversal(root);
}