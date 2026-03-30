class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sp;
        int l=0;
        int res=0;
        for(int r=0;r<s.length();r++){
            while(sp.find(s[r])!=sp.end()){
                sp.erase(s[l]);
                l+=1;
            }
            sp.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
