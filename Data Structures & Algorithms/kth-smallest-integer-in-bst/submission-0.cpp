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
    int k;
    int result;

    void inorder(TreeNode* root) {
        if (root == nullptr || k == 0) return;

        inorder(root->left);

        k--;
        if (k == 0) {
            result = root->val;
            return;
        }

        inorder(root->right);
    }

    int kthSmallest(TreeNode* root, int k_val) {
        k = k_val;
        result = -1;
        inorder(root);
        return result;
    }
};
