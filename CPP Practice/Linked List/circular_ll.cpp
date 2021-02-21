//LeetCode Challenge
#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next, *prev;
    Node(int val) {
        this->val = val;
        this->next = 0;
        this->prev = 0;
    }
};

class MyLinkedList {
    Node *head;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        this->head = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(!this->head) return -1;
        Node *temp = this->head;
        int i=0;
        do {
            if(i==index){
                return temp->val;
            }
            i++;
            temp = temp->next;
        }
        while(temp!=this->head);
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        newNode->next = this->head;
        if(this->head) {
            newNode->prev = this->head->prev;
            this->head->prev = newNode;
            newNode->prev->next = newNode;
        }
        else {
            newNode->prev = newNode;
            newNode->next = newNode;
        }
        this->head = newNode;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(!this->head) {
            this->addAtHead(val);
            return;
        }
        Node *temp = this->head;
        while(temp->next != this->head) {
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->next->prev = newNode;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index == 0) {
            //head insertion
            this->addAtHead(val);
            return;
        }
        int i=0;
        Node *temp = this->head;
        do {
            if(i == index) break;
            i++;
            temp = temp->next;
        }
        while(temp != this->head);
        if(i+1 == index) {
            //add at tail
            this->addAtTail(val);
        }
        else if(i==index) {
            Node *newNode = new Node(val);
            newNode->next = temp;
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            temp->prev = newNode;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(!this->head) return;
        int i=1;
        Node *delNode=0;
        if(index == 0) {
            //head delete
            delNode = this->head;
            this->head = this->head->next;
            if(this->head) {
                this->head->prev = delNode->prev;
                delNode->prev->next = this->head;
            }
            delete delNode;
            return;
        }
        Node *temp = this->head->next;
        while(temp!=this->head) {
            if(i == index) {
                //delete this node
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->prev = 0;
                temp->next = 0;
                delete temp;
                return;
            }
            i++;
            temp = temp->next;
        }
        return;
    }

    void llState() {
        if(!this->head) return;
        Node *temp = this->head;
        do {
            cout<<temp->val<<"\t";
            temp = temp->next;
        }
        while(temp!=this->head);
        cout<<endl;
    }

    void search(int val) {
        if(!this->head) return;
        int i=0;
        bool flag=false;
        Node* temp = this->head;
        do {
            if(temp->val == val) {
                cout<<val<<" found at index "<<i<<endl;
                flag=true;
            }
            temp = temp->next;
            i++;
        }
        while(temp != this->head);
        if(flag == false) cout<<"Not found";
    }
};

int main() {
    MyLinkedList* obj = new MyLinkedList();
    obj->addAtHead(4);
    obj->addAtHead(5);
    obj->llState();
    obj->addAtHead(6);
    obj->addAtTail(7);
    obj->llState();
    obj->addAtIndex(6,2);
    obj->llState();
    obj->deleteAtIndex(4);
    obj->llState();
    obj->search(4);
}