class Solution {
   public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        res.clear();
        vector<int> comb;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, 0, target, 0, comb);
        return res;
    }
    void dfs(vector<int>& candidates, int i, int target, int currSum, vector<int>& comb) {
        if (currSum == target) {
            res.push_back(comb);
            return;
        }
        if (i == candidates.size() || currSum > target) {
            return;
        }
        comb.push_back(candidates[i]);
        dfs(candidates, i + 1, target, currSum + candidates[i], comb);

        comb.pop_back();
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }
        dfs(candidates, i + 1, target, currSum, comb);
    }
};
