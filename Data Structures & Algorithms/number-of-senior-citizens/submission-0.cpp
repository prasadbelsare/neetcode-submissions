class Solution {
   public:
    int countSeniors(vector<string>& details) {
        int res = 0;
        for (string& s : details) {
            if (stoi(s.substr(11, 2)) > 60) {
                res += 1;
            }
        }
        return res;
    }
};