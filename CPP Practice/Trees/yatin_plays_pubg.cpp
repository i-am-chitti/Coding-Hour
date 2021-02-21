#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int enemy;
    Node *left,*right;
    Node(int x) {
        this->enemy=x;
        left=0;
        right=0;
    }
};

Node* rInsertBST(Node *root, int x) {
    if(!root) {
        Node *nNode = new Node(x);
        return nNode;
    }
    if(x<root->enemy) root->left = rInsertBST(root->left,x);
    else root->right = rInsertBST(root->right,x);
}

int getHeight(Node *root) {
    if(!root) return 0;
    int x = getHeight(root->left);
    int y = getHeight(root->right);
    return x>y?x+1:y+1;
}

int main() {
	int T;
    cin>>T;
    while(T--) {
        int N,temp;
        cin>>N;
        Node *root=0;
        for(int i=0;i<N;i++) {
            cin>>temp;
            root = rInsertBST(root,temp);
        }
        cout<<getHeight(root)<<endl;
    }
}