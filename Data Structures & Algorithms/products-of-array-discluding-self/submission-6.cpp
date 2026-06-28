class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> res(nums.size(),1);
        res[0]=1;
        for (int i = 1; i < nums.size(); i++) {
            res[i] = prod * nums[i - 1];
            prod = res[i];
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            res[i] *= prod;
            prod*=nums[i];
        }
        return res;
    }
};
