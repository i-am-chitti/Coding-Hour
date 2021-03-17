/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* addOneRow(TreeNode* root, int v, int d) {
    TreeNode *tempNode;
    if(d==1) {
        TreeNode *newNode;
        newNode = new TreeNode(v);
        newNode->left = root;
        root = newNode;
    }
    else {
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty() && d>2) {
            int N = que.size();
            while(N>0) {
                tempNode = que.front();
                que.pop();
                if(tempNode->left) que.push(tempNode->left); 
                if(tempNode->right) que.push(tempNode->right);
                N--; 
            }
            d--;
        }
        while(!que.empty()) {
            tempNode = que.front();
            que.pop();
            TreeNode *tempLeft = tempNode->left, *tempRight = tempNode->right;
            TreeNode *newNode1 = new TreeNode(v), *newNode2 = new TreeNode(v);
            tempNode->left = newNode1;
            tempNode->right = newNode2;
            newNode1->left = tempLeft;
            newNode2->right = tempRight;
        }
    }
    return root;
}

void solve(){
}
 

int main()
{
    fast_cin();
    ll T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}