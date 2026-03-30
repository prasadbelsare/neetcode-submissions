/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        post(root,res);
        return res;
    }
private:
void post(Node* node,vector<int>& res){
if(!node) return;
for(auto child:node->children){
    post(child,res);
}
res.push_back(node->val);
}
};