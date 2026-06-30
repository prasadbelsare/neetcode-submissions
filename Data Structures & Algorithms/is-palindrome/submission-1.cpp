class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            while (l<r && !isAlpha(s[l])){
                l+=1;
            }
            while(l<r && !isAlpha(s[r])){
                r-=1;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l+=1;
            r-=1;
        }
        return true;
    }
    bool isAlpha(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
