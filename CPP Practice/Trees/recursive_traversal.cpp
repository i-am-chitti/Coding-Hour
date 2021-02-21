#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void preOrder(TreeNode *root) {
    if(!root) return;
    cout<<root->val<<"\t";
    preOrder(root->left);
    preOrder(root->right);
}

void inorder(TreeNode *root) {
    if(!root) return;
    inorder(root->left);
    cout<<root->val<<"\t";
    inorder(root->right);
}

void postOrder(TreeNode *root) {
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<"\t";
}

void bfs(TreeNode *root) {
    if(!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int n=q.size();
        for(int i=1;i<=n;i++) {
            root = q.front();
            q.pop();
            cout<<root->val<<"\t";
            if(root->left) q.push(root->left);
            if(root->right) q.push(root->right);
        }
    }
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2); 
    root->right = new TreeNode(3); 
    root->left->left = new TreeNode(4); 
    root->left->right = new TreeNode(5); 
    cout<<"PreOrder Traversal\n";
    preOrder(root);
    cout<<"\nInOrder Traversal\n";
    inorder(root);
    cout<<"\nPostOrder Traversal\n";
    postOrder(root);
    cout<<"\nBFS Traversal\n";
    bfs(root);
}