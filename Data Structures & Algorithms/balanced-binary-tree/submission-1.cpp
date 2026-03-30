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
    bool isBalanced(TreeNode* root) {
        return dfs(root)!=-1;
    }
private:
int dfs(TreeNode* node) {
        if (!node) {
            return 0;
        }
        int left_ht = dfs(node->left);
        if(left_ht==-1)return -1;
        int right_ht = dfs(node->right);
        if(right_ht==-1)return -1;
        if(abs(left_ht-right_ht)>1)return -1;

        return 1 + max(left_ht, right_ht);
    }
};
