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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if(sameTree(subRoot,root))return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
    bool sameTree(TreeNode* subRoot,TreeNode* root){
    if(!subRoot && !root)return true;
    if(!root  || !subRoot || subRoot->val!=root->val) return false;
    return sameTree(subRoot->left,root->left) && sameTree(subRoot->right,root->right);
}
};