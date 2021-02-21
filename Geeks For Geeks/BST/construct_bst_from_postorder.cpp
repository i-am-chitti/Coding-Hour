// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *constructTree (int [], int );

void printInorder (Node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
	

}

int main ()
{   
    int t,n;
   scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int post[n];
        for(int i=0;i<n;i++)
        scanf("%d",&post[i]);

    Node* root = constructTree(post, n);

	printInorder(root);
    printf("\n");
}
	return 0;
}
// } Driver Code Ends


/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node* createBST(int pos[], int &last, int key, int min, int max) {
    if(last<0) return 0;
    Node *root = 0;
    if(key>=min && key<=max) {
        root = new Node(key);
        last--;
        if(last>=0) {
            root->right=createBST(pos,last,pos[last],key,max);
            root->left=createBST(pos,last,pos[last],min,key);
        }
    }
    return root;
}

Node *constructTree (int post[], int size)
{
//code here
    int postIndex=size-1;
    return createBST(post,postIndex,post[postIndex],INT_MIN,INT_MAX);
}