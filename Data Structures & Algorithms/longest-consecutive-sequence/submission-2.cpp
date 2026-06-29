class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> sp(nums.begin(), nums.end());
        int res = 0;

        for (int num : nums) {
            int count = 1;
            int start = num;
            while (sp.find(start + 1) != sp.end()) {
                count += 1;
                start += 1;
            }
            res = max(res, count);
        }
        return res;
    }
    
};
