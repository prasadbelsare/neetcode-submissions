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
    vector<int> res;
    private:
    void inOrder(TreeNode* node){
        if(!node)return;
        if(node->left)inOrder(node->left);
        res.push_back(node->val);
        if(node->right)inOrder(node->right);
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return res;
    }
};