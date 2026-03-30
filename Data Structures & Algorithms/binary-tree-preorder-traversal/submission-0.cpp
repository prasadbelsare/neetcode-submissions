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
vector<int>res;
    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return res;
    }
private:
void preOrder(TreeNode* node){
    if(!node) return;
    res.push_back(node->val);
    if(node->left)preOrder(node->left);
    if(node->right)preOrder(node->right);

}
};