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

    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int n=0;
        dfs(root,root->val,n);
        return n;
    }
    void dfs(TreeNode* node, int maxSoFar, int &n){
        if(!node)return;
        if(node->val >= maxSoFar){
            n+=1;
        }
       int newMax=max(maxSoFar,node->val);
        dfs(node->left,newMax,n);
        dfs(node->right,newMax,n);
    }
};