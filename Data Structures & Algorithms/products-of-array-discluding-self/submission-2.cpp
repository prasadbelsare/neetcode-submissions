class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        int leftP = 1;
        int rightP = 1;
        for (int i = 1; i < n; i++) {
            left[i] = leftP * nums[i - 1];
            leftP = left[i];
        }
        for (int r = n - 2; r >= 0; r--) {
            right[r] = rightP * nums[r + 1];
            rightP = right[r];
        }
        for (int i = 0; i < n; i++) {
            res[i] = left[i] * right[i];
        }
        return res;
    }
};
