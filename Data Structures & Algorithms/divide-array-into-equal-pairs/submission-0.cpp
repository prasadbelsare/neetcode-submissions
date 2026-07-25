class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n: nums){
            mp[n]+=1;
        }
        for(auto m: mp){
            if((m.second%2)!=0)return false;
        }
        return true;
    }
};