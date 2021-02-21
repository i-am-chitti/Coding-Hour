/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return 0;
        if(root->left && !root->left->next) {
            if(root->right) root->left->next = root->right;
            else {
                if(root->next) {
                    Node* temp = root->next;
                    while(temp && !temp->left && !temp->right) temp=temp->next;
                    if(temp) {
                        connect(temp);
                        if(temp->left) root->left->next = temp->left;
                        else root->left->next = temp->right;
                    }
                }
            }
        }
        if(root->right && root->next && !root->right->next) {
            Node *temp = root->next;
            while(temp && !temp->left && !temp->right) temp=temp->next;
            if(temp) {
                connect(temp);
                if(temp->left) root->right->next = temp->left;
                else root->right->next = temp->right;
            }
        }
        connect(root->left);
        connect(root->right);
        return root;
    }
};