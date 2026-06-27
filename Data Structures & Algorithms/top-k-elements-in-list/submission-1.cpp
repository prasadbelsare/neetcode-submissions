class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<vector<int>>bk(nums.size()+1);
        for(auto m:mp){
            bk[m.second].push_back(m.first);
        }
        vector<int> res;
        for(int i=bk.size()-1;res.size()<k;i--){
            for(int n:bk[i]){
                res.push_back(n);
            }
        }
        return res;
    }
};
