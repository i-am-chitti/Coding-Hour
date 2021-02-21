#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
    public:
    T val;
    Node *left;
    Node *right;
    Node(T x) {
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

#endif