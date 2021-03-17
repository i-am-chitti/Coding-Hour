/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(!root) return res;
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty()) {
            int N=que.size(),n=N;
            double sum=0;
            while(N>0) {
                TreeNode* curr = que.front();
                que.pop();
                if(curr->left) que.push(curr->left);
                if(curr->right) que.push(curr->right);
                sum+=curr->val;
                N--;
            }
            res.push_back(sum/n);
        }
        return res;
    }
};