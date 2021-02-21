#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int x) {
        this->data = x;
        this->next=0;
    }
};

void printLL(Node *head) {
    while(head) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* reverse(Node* head) {
    // e.g: 2->18->24->3->5
    if(!head->next) return head;
    Node *curr=head,*prev=0,*next=head->next;

    //reverse in group of even numbers only
    // this will reverse 2->18->24->3->5, into \0<-2<-18 24->3->5
    while(curr && curr->data%2==0 && next && next->data%2==0) {
        curr->next=prev;
        prev=curr;
        curr=next;
        next = next->next;
    }
    //changing final node
    //\0<-2<-18<-24 3->5  still even set is not linked to complete set
    if(prev && prev->data%2==0 && curr && curr->data%2==0) {
        curr->next = prev;
    }
    //linking even set with the next set(may be even or odd)
    if(next) head->next = reverse(next);
    return curr;
}

int main() {
    int N;
    cin>>N;
    int temp;
    cin>>temp;
    Node *head = new Node(temp), *tmp;
    tmp=head;
    for(int i=1;i<N;i++) {
        cin>>temp;
        tmp->next = new Node(temp);
        tmp=tmp->next;
    }
    cout<<endl;
    printLL(head);
    head = reverse(head);
    cout<<endl;
    printLL(head);
}