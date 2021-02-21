#include<bits/stdc++.h>
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
        if(this->head == 0) return -1;
        Node *temp = this->head;
        int i=0;
        while(temp!=0) {
            if(i==index){
                return temp->val;
            }
            i++;
            temp = temp->next;
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        newNode->next = this->head;
        if(this->head)
            this->head->prev = newNode;
        this->head = newNode;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *temp = this->head;
        while(temp->next) {
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->prev = temp;
        temp->next = newNode;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index == 0) {
            //head insertion
            this->addAtHead(val);
        }
        int i=0;
        Node *temp = this->head;
        while(temp->next) {
            if(i == index) break;
            i++;
            temp = temp->next;
        }
        if(i+1 == index) {
            // tail insertion
            this->addAtTail(val);
        }
        else if(i == index) {
            Node *newNode = new Node(val);
            newNode->next = temp;
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            temp->prev = newNode;
            return;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int i=0;
        Node *temp = this->head, *delNode=0;
        if(index == 0) {
            delNode = this->head;
            this->head = this->head->next;
            if(this->head)
                this->head->prev = 0;
            delete delNode;
            return;
        }
        while(temp) {
            if(i == index) {
                //delete this node
                temp->prev->next = temp->next;
                if(temp->next) temp->next->prev = temp->prev;
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
    
    void printLL() {
        Node *temp = this->head;
        while(temp) {
            cout<<temp->val<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
MyLinkedList* obj = new MyLinkedList();
obj->addAtHead(7);
obj->printLL();
obj->addAtHead(2);
obj->printLL();
obj->addAtHead(1);
obj->printLL();
obj->addAtIndex(3,0);
obj->printLL();
obj->deleteAtIndex(2);
obj->printLL();
obj->addAtHead(6);
obj->printLL();
obj->addAtTail(4);
obj->printLL();
cout<<obj->get(4);
obj->printLL();
obj->addAtHead(4);
obj->printLL();
obj->addAtIndex(5,0);
obj->printLL();
obj->addAtHead(6);
obj->printLL();
}