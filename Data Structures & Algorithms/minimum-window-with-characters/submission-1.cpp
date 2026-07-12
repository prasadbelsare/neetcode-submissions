class Solution {
public:
    string minWindow(string s, string t) {
        int ansLen=INT_MAX;
        int formed=0;
        int subl = 0, subr = 0;
        unordered_map<char,int>mp;
        for(char &ch:t){
            mp[ch]++;
        }
        int totalReq=mp.size();
        int l=0,r=0;
        while(r<s.size()){
            if(mp.find(s[r])!=mp.end()){
                mp[s[r]]-=1;
                if(mp[s[r]]==0){
                    formed+=1;
                }
            }
            while(l<=r && formed==totalReq){
                int currLen=r-l+1;
                if(currLen<ansLen){
                    ansLen=currLen;
                    subl=l;
                    subr=r+1;
                }
                char ch=s[l];
                if(mp.find(ch)!=mp.end()){
                    if(mp[ch]==0){
                        formed-=1;
                    }
                    mp[ch]+=1;
                }
                l+=1;
            }
            r+=1;
        }
        return ansLen==INT_MAX?"":s.substr(subl,subr-subl);
    }
};
