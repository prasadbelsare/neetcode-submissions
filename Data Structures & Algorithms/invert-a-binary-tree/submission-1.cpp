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
    TreeNode* invertTree(TreeNode* root) {
    dfs(root);
    return root;
    }
    TreeNode* dfs(TreeNode* node){
        if(!node) return nullptr;
        TreeNode* left= dfs(node->left);
        TreeNode* right= dfs(node->right);
        TreeNode* dummy=node->left;
        node->left=node->right;
        node->right=dummy;
        return node;

    }
};
