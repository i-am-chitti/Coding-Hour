#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int key;
    Node *left,*right;
    Node(int x) {
        this->key=x;
        left=0;
        right=0;
    }
};

Node* getNode(Node* root, int &key) {
    if(!root || root->key==key) return root;
    Node *temp = getNode(root->left,key);
    if(!temp) return getNode(root->right,key);
}

void dfs(Node *root) {
    if(!root) return;
    cout<<root->key<<" ";
    dfs(root->left);
    dfs(root->right);
}

int getMirrorImage(Node* left,Node* right, int &key) {
    if(!left || !right) return -1;
    if(left->key == key) return right->key;
    else if(right->key==key) return left->key;
    int mirrorImage = getMirrorImage(left->left,right->right,key);
    if(mirrorImage==-1) return getMirrorImage(left->right,right->left,key);
}

int main() {
    int N,Q;
    cin>>N>>Q;
    int pKey,cKey;
    char child;
    Node* root = new Node(1);
    for(int i=0;i<N-1;i++) {
        cin>>pKey>>cKey>>child;
        Node *pNode = getNode(root,pKey);
        Node *cNode = new Node(cKey);
        if(child=='L') pNode->left = cNode;
        else pNode->right = cNode;
    }
    for(int i=0;i<Q;i++) {
        int temp;
        cin>>temp;
        if(temp==1) cout<<temp;
        else cout<<getMirrorImage(root->left,root->right,temp);
        cout<<endl;
    }   
}