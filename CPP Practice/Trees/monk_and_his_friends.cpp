/*
BY: HackerEarth
Link: https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/

Monk is standing at the door of his classroom. There are currently N students in the class, i'th student got Ai candies.
There are still M more students to come. At every instant, a student enters the class and wishes to be seated with a student who has exactly the same number of candies. For each student, Monk shouts YES if such a student is found, NO otherwise.

Input:
First line contains an integer T. T test cases follow.
First line of each case contains two space-separated integers N and M.
Second line contains N + M space-separated integers, the candies of the students.

Output:
For each test case, output M new line, Monk's answer to the M students.
Print "YES" (without the quotes) or "NO" (without the quotes) pertaining to the Monk's answer.
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Node {
    public:
    ll data,height;
    Node *left,*right;
    Node(ll x) {
        this->data=x;
        this->left=this->right=0;
        this->height=1;
    }
};

int getHeight(Node *root) {
    int hL,hR;
    hL=root && root->left?root->left->height:0;
    hR=root && root->right?root->right->height:0;
    return hL>hR?hL+1:hR+1;
}

int getBalanceFactor(Node *root) {
    int hL,hR;
    hL=root && root->left?root->left->height:0;
    hR=root && root->right?root->right->height:0;
    return hL-hR;
}

Node* LLRotation(Node *root) {
    //cout<<"LLRotation\n";
    Node *lChild=root->left, *lRChild=lChild->right;
    root->left=lRChild;
    lChild->right=root;
    return lChild;
}

Node* LRRotation(Node *root) {
    //cout<<"LRRotation\n";
    Node* lChild=root->left, *lRChild=lChild->right;
    lChild->right=lRChild->left;
    root->left=lRChild->right;
    lRChild->right=root;
    lRChild->left=lChild;
    return lRChild;
}

Node* RLRotation(Node *root) {
    //cout<<"RLRotation\n";
    Node *rChild=root->right, *rLChild=rChild->left;
    root->right=rLChild->left;
    rChild->left=rLChild->right;
    rLChild->left=root;
    rLChild->right=rChild;
    return rLChild;
}

Node* RRRotation(Node *root) {
    //cout<<"RRRotation\n";
    Node *rChild=root->right, *rLChild=rChild->left;
    root->right=rLChild;
    rChild->left=root;
    return rChild; 
}

Node* RInsert(Node *root, ll key) {
    if(!root) {
        Node *newNode = new Node(key);
        return newNode;
    }
    else {
        if(key<root->data) root->left=RInsert(root->left,key);
        else root->right=RInsert(root->right,key);

        //updating height
        root->height=getHeight(root);

        if(getBalanceFactor(root)==2 && getBalanceFactor(root->left)==1) {
            //LL Rotation
            root=LLRotation(root);
        }
        else if(getBalanceFactor(root)==2 && getBalanceFactor(root->left)==-1) {
            //LR rotation
            root=LRRotation(root);
        }
        else if(getBalanceFactor(root)==-2 && getBalanceFactor(root->right)==1) {
            //RL Rotation
            root=RLRotation(root);
        }
        else if(getBalanceFactor(root)==-2 && getBalanceFactor(root->right)==-1) {
            //RR rotation
            root=RRRotation(root);
        }
    }
    return root;
}

bool Search(Node* root, ll key) {
    if(!root) return 0;
    else {
        if(root->data==key) return 1;
        else if(key<root->data) return Search(root->left,key);
        else return Search(root->right,key);
    }
}

void Inorder(Node* root) {
    if(!root) return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(Node* root) {
    if(!root) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main() {
	ll T;
    cin>>T;
    while(T--) {
        Node *root=0;
        ll N,M,temp;
        cin>>N>>M;
        for(ll i=0;i<N;i++) {
            cin>>temp;
            root=RInsert(root,temp);
        }
        for(ll i=0;i<M;i++) {
            cin>>temp;
            if(Search(root,temp)) cout<<"YES\n";
            else {
                root=RInsert(root,temp);
                cout<<"NO\n";
            }
        }
    }
}