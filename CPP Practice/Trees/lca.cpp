// C++ Program for Lowest Common Ancestor in a Binary Tree 
// A O(n) solution to find LCA of two given values n1 and n2 
#include <iostream> 
#include <vector> 

using namespace std; 

// A Binary Tree node 
struct Node 
{ 
	int key; 
	struct Node *left, *right; 
}; 

// Utility function creates a new binary tree node with given key 
Node * newNode(int k) 
{ 
	Node *temp = new Node; 
	temp->key = k; 
	temp->left = temp->right = NULL; 
	return temp; 
}

bool generatePath(Node* root, vector<int>& path, int n) {
    if(!root) return 0;
    path.push_back(root->key);
    if(root->key==n) return 1;
    if(generatePath(root->left, path,n) || generatePath(root->right,path,n)) return 1;
    else path.pop_back();
    return 0;
}

// Returns LCA if node n1, n2 are present in the given binary tree, 
// otherwise return -1 
int findLCA(Node *root, int n1, int n2) 
{ 
    vector<int> path1, path2;
    if(!generatePath(root,path1,n1) || !generatePath(root,path2,n2)) return -1;
    int i;
    for(i=0;i<path1.size()&&i<path2.size();i++) {
        if(path1[i]!=path2[i]) break;
    }
    return path1[i-1];
} 

// Driver program to test above functions 
int main() 
{ 
	// Let us create the Binary Tree shown in above diagram. 
	Node * root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->left = newNode(6); 
	root->right->right = newNode(7); 
	cout << "LCA(4, 5) = " << findLCA(root, 4, 5)<<endl; 
	cout << "nLCA(4, 6) = " << findLCA(root, 4, 6)<<endl; 
	cout << "nLCA(3, 4) = " << findLCA(root, 3, 4)<<endl; 
	cout << "nLCA(2, 4) = " << findLCA(root, 2, 4)<<endl; 
	return 0; 
} 
