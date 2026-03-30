class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> output;
        deque<int> q; // Stores indices
        int l = 0, r = 0;
        
        while (r < nums.size()) {
            // pop smaller values from q
            while (!q.empty() && nums[q.back()] < nums[r]) {
                q.pop_back();
            }
            q.push_back(r);
            
            // remove left val from window if it's out of bounds
            if (l > q.front()) {
                q.pop_front();
            }
            
            // if window has reached size k, add to output and shift left pointer
            if ((r + 1) >= k) {
                output.push_back(nums[q.front()]);
                l++;
            }
            r++;
        }
        
        return output;
    }
};
