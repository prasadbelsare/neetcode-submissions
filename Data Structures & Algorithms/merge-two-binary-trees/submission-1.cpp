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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return merge(root1,root2);
    }
    TreeNode* merge(TreeNode* node1, TreeNode* node2){
        if(!node1)return node2;
        if(!node2 )return node1;
        TreeNode* newNode= new TreeNode(node1->val+node2->val);
        newNode->left = merge( node1->left,node2->left);
        newNode->right = merge( node1->right,node2->right);
        return newNode;
    }
};