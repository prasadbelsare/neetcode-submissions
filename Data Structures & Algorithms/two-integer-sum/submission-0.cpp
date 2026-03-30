class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp; //<num,index>
        for (int i = 0; i < n; i++) {
            int rem = target - nums[i];
            if (mp.find(rem) != mp.end()) {
                return { mp[rem], i };
            }
             mp.insert({nums[i], i});
        }
        return {};
    }
};