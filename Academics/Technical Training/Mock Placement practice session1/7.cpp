#include <bits/stdc++.h>  
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
typedef long long ll;

class Node {
    public:
    int data;
    Node *next;
    Node(int d) {
        this->data=d;
        this->next=0;
    }
};

Node* reverseLL(Node *head) {
    Node *next=0,*prev=0,*curr=head;
    while(curr) {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;   
}

Node* insertAtTail(Node *head, int d) {
    Node *newNode = new Node(d);
    if(!head) {
        head = newNode;
        return head;
    }
    Node *curr = head;
    while(curr->next) {
        curr=curr->next;
    }
    curr->next = newNode;
    return head;
}

void printLL(Node *head) {
    Node *curr = head;
    while(curr) {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"\n";
}

void solve(){
    int t,N;
    cin>>N;
    Node *head=0;
    while(N--) {
        cin>>t;
        head = insertAtTail(head,t);
    }
    Node *prev=0,*curr=head,*next=curr->next;
    while(curr && next && curr->data<=next->data) {
        prev=curr;
        curr=next;
        next=next->next;
    }
    if(curr) curr->next = reverseLL(next);
    printLL(head);
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