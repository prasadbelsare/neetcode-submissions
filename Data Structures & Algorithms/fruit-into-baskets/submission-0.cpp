class Solution {
   public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> seen;
        int maxLen = 0, total = 0, s = 0;

        for (int e=0;e<fruits.size();e++) {
            seen[fruits[e]]++;
            total += 1;

            while (seen.size() > 2) {
                int f = fruits[s];
                seen[f]--;
                total--;
                if (seen[f] == 0) {
                    seen.erase(f);
                }
                s++;
            }
            maxLen = max(maxLen, total);
        }
        return maxLen;
    }
};