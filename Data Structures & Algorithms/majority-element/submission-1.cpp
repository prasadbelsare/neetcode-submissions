class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

// nums = [5,5,1,1,1,5,5]
// n=7
// me=5
// cntME=1
