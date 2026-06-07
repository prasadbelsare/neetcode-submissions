class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
            if(mp.find(key)!=mp.end()&& mp[key] != i){
                return {i,mp[key]};
            }
        }
        return {};
    }
};
