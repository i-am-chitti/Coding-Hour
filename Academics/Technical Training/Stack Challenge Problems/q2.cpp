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
    int val;
    Node* next;
    Node(int data) {
        val=data;
        next=0;
    }
    Node() {
        val=0;
        next=0;
    }
};

class Stack {
    Node* top;
    public:
    Stack() {top=0;}
    void push(int data) {
        Node *newNode = new Node(data);
        if(!newNode) stackError(1);
        newNode->next = top;
        top=newNode;
    }
    void pop() {
        if(isEmpty()) stackError(2);
        Node* temp=top;
        top=top->next;
        temp->next=0;
        free(temp);
    }
    bool isEmpty() {
        if(top==0) return 1;
        else return 0;
    }

    void stackError(int type) {
        if(type==1) {
            cout<<"Can't push: Overflow";
        }
        else {
            cout<<"Can't pop: Empty";
        }
        exit(1);
    }

    int getTop() {
        if(!isEmpty()) return top->val;
        stackError(2);
    }

};

void solve(){
    Stack *obj = new Stack();
    obj->push(2);
    obj->push(7);
    obj->push(-1);
    obj->push(0);
    cout<<obj->getTop()<<"\n";
    obj->pop();
    cout<<obj->getTop()<<"\n";
    obj->pop();
    obj->pop();
    cout<<obj->getTop()<<"\n";
    obj->pop();
    obj->pop();
    obj->pop();

}
 

int main()
{
    fast_cin();
        solve();
    return 0;
}