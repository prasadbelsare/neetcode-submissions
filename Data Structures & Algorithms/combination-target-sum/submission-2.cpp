class Solution {
   public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        dfs(nums, comb, res, 0, 0, target);
        return res;
    }

   private:
    void dfs(vector<int>& nums, vector<int>& comb, vector<vector<int>>& res, int i, int total,
             int target) {
        if (target == total) {
            res.push_back(comb);
            return;
        }
        if (i >= nums.size() || total > target) {
            return;
        }
        comb.push_back(nums[i]);
        dfs(nums, comb, res, i, total + nums[i], target);

        comb.pop_back();
        dfs(nums, comb, res, i + 1, total, target);
    }
};
