class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        getSubsets(nums,0,subset,res);
        return res;
    }
    private:
    void getSubsets(vector<int>&nums,int i,vector<int>& subset,vector<vector<int>>& res){
        if (i >= nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        getSubsets(nums,i+1,subset,res);

        subset.pop_back();
        getSubsets(nums,i+1,subset,res);

    }
};