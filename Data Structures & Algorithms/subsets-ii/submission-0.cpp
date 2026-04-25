class Solution {
   public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        vector<int> subsets;
        dfs(nums, 0, subsets, res);
        return res;
    }

   private:
    void dfs(vector<int>& nums, int i, vector<int>& subsets, vector<vector<int>>& res) {
        if (i == nums.size()) {
            res.push_back(subsets);
            return;
        }
        subsets.push_back(nums[i]);
        dfs(nums, i + 1, subsets, res);
        subsets.pop_back();
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx += 1;
        }
        dfs(nums, idx, subsets, res);
    }
};
