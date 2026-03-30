class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>sp(nums.begin(),nums.end());
        int maxLen=0;
        for(auto num:nums){
            if(sp.find(num-1)==sp.end()){
                int curr_num=num;
                int curr_len=1;
                while(sp.find(curr_num+1)!= sp.end()){
                    curr_num+=1;
                    curr_len+=1;
                }
                maxLen = max(maxLen, curr_len);
            }
        }
        return maxLen;
    }
};
