class Solution {
   public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> comb;
        vector<bool> pick(nums.size(), false);
        generate(nums, comb, res, pick);
        return res;
    }
    void generate(vector<int>& nums, vector<int>& comb, vector<vector<int>>& res,
                  vector<bool>& pick) {
        if (comb.size() == nums.size()) {
            res.push_back(comb);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!pick[i]) {
                comb.push_back(nums[i]);
                pick[i] = true;
                generate(nums,comb,res, pick);
                comb.pop_back();
                pick[i] = false;
            }
        }
    }
};
