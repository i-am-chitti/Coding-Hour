#include<bits/stdc++.h>
#include "Tree.h"
using namespace std;

int main() {
    Tree<int> *tree  = new Tree<int> ();
    Node<int>* root = tree->insertNode(1);
    root->left = tree->getNode(2);
    root->right = tree->getNode(3);
    vector<int> res = tree->preorderTraversal(root);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    cout<<endl;
    res.clear();
    root = tree->insertNode(4);
    res = tree->preorderTraversal(root);
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
}