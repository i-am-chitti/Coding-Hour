#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int i, j, x;
};

class SparseMatrix {
    int m, n, num;
    Node *elem;
    public:
    void createEmpty() {
        cout<<"Enter total number of non-zero rows : ";
        cin>>this->m;
        cout<<"Enter total number of non-zero columns : ";
        cin>>this->n;
        cout<<"Enter total non-zero numbers : ";
        cin>>this->num;
        elem = new Node[this->num];
    }
    void feedValues() {
        for(int i=0;i<this->num;i++) {
            cout<<"row  column  value\n";
            cin>>this->elem[i].i>>this->elem[i].j>>this->elem[i].x;
        }
    }
    void printMatrix() {
        for(int i=0;i<this->num;i++) {
            cout<<this->elem[i].i<<"\t"<<this->elem[i].j<<"\t"<<this->elem[i].x<<endl;
        }
    }
};

int main() {
    SparseMatrix obj;
    obj.createEmpty();
    obj.feedValues();
    obj.printMatrix();
}