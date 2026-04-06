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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == NULL) return {};

        vector<vector<int>> result;
        vector<TreeNode*> queue;
        queue.push_back(root);

        while (!queue.empty()) {
            vector<int> level;
            vector<TreeNode*> next_queue;

            for (TreeNode* node : queue) {
                level.push_back(node->val);

                if (node->left != NULL) {
                    next_queue.push_back(node->left);
                }
                if (node->right != NULL) {
                    next_queue.push_back(node->right);
                }
            }

            result.push_back(level);
            queue = next_queue;
        }

        return result;
    }
};