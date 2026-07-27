class Solution {
   public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int l = 0, win = 0, satisfied = 0, maxWind = 0;
        for (int r = 0; r < customers.size(); r++) {
            if (grumpy[r] == 1) {
                win += customers[r];
            } else {
                satisfied += customers[r];
            }

            if (r - l + 1 > minutes) {
                if (grumpy[l] == 1) {
                    win -= customers[l];
                }
                l++;
            }
            maxWind = max(win, maxWind);
        }
        return satisfied + maxWind;
    }
};