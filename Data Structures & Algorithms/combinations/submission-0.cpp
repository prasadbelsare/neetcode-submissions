class Solution {
   public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> subsets;
        dfs(1, n, subsets, res, k);
        return res;
    }
    void dfs(int i, int n, vector<int>& subsets, vector<vector<int>>& res, int k) {
        if (i > n) {
            if (subsets.size() == k) {
                res.push_back(subsets);
            }
            return;
        }
        subsets.push_back(i);
        dfs(i + 1, n, subsets, res, k);
        subsets.pop_back();
        dfs(i + 1, n, subsets, res, k);
    }
};