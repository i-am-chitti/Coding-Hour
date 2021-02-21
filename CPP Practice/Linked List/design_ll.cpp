#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = 0;
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
        Node *curr = head;
        this->head = newNode;
        this->head->next = curr;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *newNode = new Node(val);
        Node *temp = this->head;
        while(temp->next) {
            temp=temp->next;
        }
        temp->next = newNode;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *temp = this->head;
        if(index == 0) {
            //add at head
            Node *node = new Node(val);
            this->head = node;
            node->next = temp;
            return;
        }
        int i=0;
        while(i<index-1 && temp) {
            i++;
            temp=temp->next;
        }
        if(!temp) return;
        Node *newNode = new Node(val);
        if(temp->next == 0) {
            //last node
            temp->next = newNode;
        }
        else {
            Node *tmp = temp->next;
            temp->next = newNode;
            newNode->next = tmp;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        Node *temp = this->head;
        if(index == 0) {
            //first node deletion
            Node *curr=temp->next;
            temp->next = 0;
            delete temp;
            this->head = curr;
            return;
        }
        int i=0;
        while(i<index-1 && temp) {
            temp = temp->next;
            i++;
        }
        if(!temp || temp->next == 0) return;
        Node *tmp = temp->next;
        Node *temp1 = tmp->next;
        temp->next = temp1;
        tmp->next = 0;
        free(tmp);
    }

    void printLL() {
        Node *temp = this->head;
        while(temp) {
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    // Your MyLinkedList object will be instantiated and called as such:
    MyLinkedList* obj = new MyLinkedList();
    //obj->addAtHead(1);
    //cout<<"Adding 2 at head"<<endl;
    //obj->printLL();
    //obj->addAtTail(3);
    //cout<<"adding 3 at tail"<<endl;
    //obj->printLL();
    //obj->addAtIndex(1,2);
    //cout<<"adding 2 at 1 index"<<endl;
    //obj->printLL();
    //cout<<"At index 1 = "<<obj->get(1)<<endl;
    //obj->deleteAtIndex(0);
    //cout<<"deleting 1 index"<<endl;
    //obj->printLL();
    //cout<<"at index 1 = "<<obj->get(0)<<endl;
    //obj->printLL();

    // MyLinkedList linkedList = new MyLinkedList(); // Initialize empty LinkedList
    // linkedList.addAtHead(1);
    // linkedList.addAtTail(3);
    // linkedList.addAtIndex(1, 2);  // linked list becomes 1->2->3
    // linkedList.get(1);            // returns 2
    // linkedList.deleteAtIndex(1);  // now the linked list is 1->3
    // linkedList.get(1);            // returns 3
}