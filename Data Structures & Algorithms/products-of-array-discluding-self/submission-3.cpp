class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int prod = 1;
        for (int i = 1; i < n; i++) {
            res[i] = prod * nums[i - 1];
            prod = res[i];
        }
        prod = 1;
        for (int i = n -1; i >= 0; i--) {
            res[i] *= prod;
            prod*=nums[i];
        }
        return res;
    }
};
