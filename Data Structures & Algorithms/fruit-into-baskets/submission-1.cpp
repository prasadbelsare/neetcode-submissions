class Solution {
   public:
    int totalFruit(vector<int>& fruits) {
        int start = 0;
        int end = 0;
        int max_len = 0;
        unordered_map<int, int> d;

        while (end < fruits.size()) {
            // Update the latest index for the current tree type
            d[fruits[end]] = end;

            // If we have more than 2 types of fruits
            if (d.size() >= 3) {
                int min_val = fruits.size(); // Initialize to a safely large number
                
                // Find the minimum index among the values in the map
                for (const auto& pair : d) {
                    min_val = min(min_val, pair.second);
                }
                
                // Remove the tree type that was last seen earliest
                d.erase(fruits[min_val]);
                
                // Shrink the window
                start = min_val + 1;
            }

            // Update the maximum length found so far
            max_len = max(max_len, end - start + 1);
            end += 1;
        }

        return max_len;
    }
};



