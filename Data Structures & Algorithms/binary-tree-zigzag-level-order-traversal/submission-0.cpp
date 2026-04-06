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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root)
            return {};
        vector<vector<int>> res;

        vector<TreeNode*> q;
        q.push_back(root);
        bool l_to_r = true;
        while (!q.empty()) {
            vector<TreeNode*> nq;
            vector<int> level;
            for (TreeNode* node : q) {
                level.push_back(node->val);
                if (node->left) {
                    nq.push_back(node->left);
                }
                if (node->right) {
                    nq.push_back(node->right);
                }
            }
            if (!l_to_r) {
                reverse(level.begin(), level.end());
            }
            res.push_back(level);
            l_to_r = !l_to_r;
            q = nq;
        }
        return res;
    }
};