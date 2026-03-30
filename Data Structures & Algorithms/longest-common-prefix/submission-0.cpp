class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=0;i<prefix.length();i++){
            for(const string &word:strs){
                if(i==word.length()|| prefix[i]!=word[i]){
                    return prefix.substr(0, i);
                }
            }
        }
        return prefix;
    }
};