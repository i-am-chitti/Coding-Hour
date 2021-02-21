#ifndef TREE_H
#define TREE_H
#include "Node.h"
#include<bits/stdc++.h>
using namespace std;

template<class T>
class Tree {

    Node<T> *root;

    public:
    Tree() : root(nullptr) {}
    Tree(Node<T>* ptr) : root(ptr) {}

    Node<T>* getNode(T data) {
        return new Node<T>(data);
    }

    vector<T> preorderTraversal(Node<T>* node) {
        static vector<T> nodes;
        if(node==nullptr) return nodes;
        nodes.push_back(node->val);
        preorderTraversal(node->left);
        preorderTraversal(node->right);
        return nodes;
    }   

    vector<T> inorderTraversal(Node<T>* node) {
        static vector<T> nodes;
        if(node==nullptr) return nodes;
        this->inorderTraversal(node->left);
        nodes.push_back(node->val);
        this->inorderTraversal(node->right);
        return nodes;
    }  

    vector<T> postorderTraversal(Node<T>* node) {
        static vector<T> nodes;
        if(node==nullptr) return nodes;
        this->postorderTraversal(node->left);
        this->postorderTraversal(node->right);
        nodes.push_back(node->val);
        return nodes;
    }   

    vector<T> levelOrderTraversal(Node<T>* node) {
        vector<T> nodes;
        if(!node) return nodes;
        queue<Node<T>*> tq;
        tq.push(node);
        while(!tq.empty()) {
            int currentSize = tq.size();
            for(int i=0;i<currentSize;i++) {
                Node<T> *currentNode = tq.front();
                tq.pop();
                nodes.push_back(currentNode->val);
                if(currentNode->left) tq.push(currentNode->left);
                if(currentNode->right) tq.push(currentNode->right);
            }
        }
        return nodes;
    }

    Node<T>* insertNode(T data) {
        Node<T> *node = this->getNode(data);
        if(!this->root) {
            root = node;
            return root;
        }
        //do level order traversal to find the place
        queue<Node<T>*> tq;
        tq.push(root);
        while(!tq.empty()) {
            int currentSize = tq.size();
            for(int i=0;i<currentSize;i++) {
                Node<T>* currentNode = tq.front();
                tq.pop();
                if(currentNode->left && currentNode->right) {
                    tq.push(currentNode->left);
                    tq.push(currentNode->right);
                }
                else {
                    if(!currentNode->left) currentNode->left = node;
                    else currentNode->right = node;
                    return this->root;
                }
            }
        }
    }

};

#endif