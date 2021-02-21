#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int x, Node *next) {
        this->data = x;
        this->next = next;
    }
};


void printLL(Node *head) {
    cout<<endl;
    while(head) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* insert(Node* curr, int x) {
    Node* next = new Node(x,0);
    if(!curr) {
        curr = next;
        return curr;
    }
    curr->next = next;
    return next;
    
}

Node* reverseInGroup(Node *head, int K) {
    Node *prev=0,*next=0,*curr=head;
    int count=0;
    while(curr && count<K) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if(next) {
        head->next = reverseInGroup(next,K);
    }
    return prev;
}

int main() {
    Node *head=0;
    Node *curr = head;
    for(int i=0;i<5;i++) {
        curr=insert(curr,i);
        if(i==0) head = curr;
    } 
    printLL(head);
}