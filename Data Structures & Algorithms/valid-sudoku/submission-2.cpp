class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> grid(9);
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char num = board[r][c];
                if (num == '.') {
                    continue;
                }
                int grid_ind = (r / 3) * 3 + (c / 3);
                if (rows[r].count(num) || cols[c].count(num) || grid[grid_ind].count(num)) {
                    return false;
                }
                rows[r].insert(num);
                cols[c].insert(num);
                grid[grid_ind].insert(num);
            }
        }
        return true;
    }
};