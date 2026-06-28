class Solution {
   public:
    string encode(vector<string>& strs) {
        string res;
        for (string str : strs) {
            res += to_string(str.size()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            int j=i+1;
            while(s[j]!='#'){
                j++;
            }
            int n=stoi(s.substr(i, j - i));
            i=j+1;
            string word=s.substr(i,n);
            res.push_back(word);
            j=j+n+1;
            i=j;
        }
        return res;
    }
};
