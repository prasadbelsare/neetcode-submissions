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
    vector<int> rightSideView(TreeNode* root) {
       if(!root) return {};
        vector<int> res;
        vector<TreeNode*> q;
        q.push_back(root);
        while(!q.empty()){
            vector<int>level;
            vector<TreeNode*>nq;

            for(TreeNode* node:q){
                level.push_back(node->val);
                if(node->left){
                    nq.push_back(node->left);
                }
                                if(node->right){
                    nq.push_back(node->right);
                }

            }
            res.push_back(level.back());
            q=nq;
        }
        return res; 
    }
};
