/*
Author : Deepak Kumar
UID: 18BCS2295
*/
#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

typedef long long ll;

class Node {
    public:
    int it;
    float ft;
    char cr;
    string type;
    Node* next;
    Node(int val, string t) {
        type=t;
        it=val;
        next=0;
    }
    Node(float val, string t) {
        type=t;
        ft=val;
        next=0;
    }
    Node(char val, string t) {
        type=t;
        cr=val;
        next=0;
    }
};

class Stack {
    Node *top;
    public:
    Stack() {top=0;}
    void push() {
        cout<<"Enter type: ";
        string type;
        cin>>type;
        int it;
        float ft;
        char cr;
        cout<<"Enter data: ";
        if(type=="int") {
            cin>>it;
            Node *newNode = new Node(it,type);
            newNode->next = top;
            top=newNode;
        }
        else if(type=="float") {
            cin>>ft;
            Node *newNode = new Node(ft,type);
            newNode->next = top;
            top=newNode;
        }
        else if(type=="char") {
            cin>>cr;
            Node *newNode = new Node(cr,type);
            newNode->next = top;
            top=newNode;
        }
        else cout<<"Invalid Type\n";
    }
    void pop() {
        if(isEmpty()) {
            cout<<"Can't pop: Empty\n";
            return;
        }
        Node *temp=top;
        top=top->next;
        temp->next=0;
        free(temp);
    }
    bool isEmpty() {
        if(!top) return 1;
        return 0;
    }
    void getTop() {
        string type = top->type;
        if(type=="int") cout<<top->it<<"\n";
        else if(type=="float") cout<<top->ft<<"\n";
        else if(type=="char") cout<<top->cr<<"\n";
        else cout<<"Invalid type\n";
    }
};

void solve(){
    Stack *obj = new Stack();
    int choice;
    while(true) {
        cout<<"1.Push\n2.Pop\n3.Top\n4.Exit\n";
        cin>>choice;
        switch(choice) {
            case 1: obj->push();
            break;
            case 2: obj->pop();
            break;
            case 3: obj->getTop();
            break;
            case 4: return;
            break;
            default: cout<<"Invalid Input! Try again\n";
        }
    }
}
 

int main()
{
    //fast_cin();
        solve();
    return 0;
}