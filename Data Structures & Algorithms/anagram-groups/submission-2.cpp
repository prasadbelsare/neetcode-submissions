class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;

        for(const auto& str:strs){
            vector<int>temp(26,0);
            for(char c: str){
                temp[c-'a']+=1;
            }
            string key = to_string(temp[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(temp[i]);
            }
            mp[key].push_back(str);
        }
        for(auto m:mp){
            res.push_back(m.second);
        }
        return res;
    }
};
