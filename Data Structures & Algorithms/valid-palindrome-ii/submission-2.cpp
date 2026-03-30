class Solution {
public:
    bool validPalindrome(string s) {
       int l=0,r=s.size()-1;
       while(l<r){
        if(s[l]!=s[r]){
            return isPalindrome(s, l + 1, r) ||
                       isPalindrome(s, l, r - 1);
        }
        l+=1;
        r-=1;
       }
       return true;
    }
    private:
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};