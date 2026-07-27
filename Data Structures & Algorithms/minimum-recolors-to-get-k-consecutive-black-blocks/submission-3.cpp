class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int res=0;
        unordered_map<char,int>mp;
        for(int i=0;i<k;i++){
            mp[blocks[i]]+=1;
        }
        res=mp['W'];
        for(int r=k;r<blocks.size();r++){
            mp[blocks[r-k]]-=1;
            mp[blocks[r]]+=1;
            res=min(res,mp['W']);
        }
        return res;
    }
};