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
TreeNode* helper(TreeNode* node){
if(!node->left) return node->right;
if(!node->right)return node->left;
TreeNode* left= node->left;
TreeNode* right=node->right;
while(left->right){
left=left->right;
}
left->right=right;
return node->left;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        if(root->val==key){
           return helper(root);
        }
        TreeNode* curr= root;
        while(root){
            if(key<root->val){
                if(root->left && root->left->val==key){
                    root->left=helper(root->left);
                    break;
                }
                root=root->left;
            }else{
                if(root->right && root->right->val==key){
                    root->right=helper(root->right);
                    break;
                }
                root=root->right;
            }
        }
        return curr;
    }
};