#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = 0;
    }
};

class LinkedList {
    Node* head;
    public:
    LinkedList() {
        this->head = 0;
    }

    void insertAtHead(int data) {
        Node *newNode = new Node(data);
        if(this->head == 0) {
            this->head = newNode;
        }
        else {
            Node *temp = this->head;
            newNode->next = temp;
            this->head = newNode;
        }
    }

    void insertAtEnd(int data) {
        Node *newNode = new Node(data);
        Node *temp = this->head;
        while(temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteHead() {
        Node *temp = this->head;
        this->head = this->head->next;
        temp->next = 0;
        free(temp);
    }

    void deleteTail() {
        Node *temp = this->head;
        while(temp->next->next) {
            temp = temp->next;
        }
        Node *removalNode = temp->next;
        temp->next = 0;
        free(removalNode);
    }

    void printNodes() {
        Node *temp = this->head;
        while(temp) {
            cout<<temp->data<<"\t";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    LinkedList *list = new LinkedList();
    list->insertAtHead(5);
    list->insertAtEnd(6);
    list->insertAtEnd(7);
    list->insertAtEnd(8);
    list->insertAtEnd(9);
    list->insertAtEnd(10);

    cout<<"Liked list initial state"<<endl;
    list->printNodes();

    list->insertAtHead(10);
    cout<<"After insertion at head"<<endl;
    list->printNodes();

    list->insertAtEnd(1);
    cout<<"After insertion at tail"<<endl;
    list->printNodes();

    list->deleteHead();
    cout<<"After deletion of head"<<endl;
    list->printNodes();

    list->deleteTail();
    cout<<"After deletion of tail"<<endl;
    list->printNodes();
}