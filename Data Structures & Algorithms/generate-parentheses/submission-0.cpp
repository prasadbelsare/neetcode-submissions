class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string curr="";

        generate(n,n,curr,res);

        return res;
    }
    void generate(int o,int c, string&curr, vector<string>&res){
        if(o==0 && c==0){
            res.push_back(curr);
            return;
        }
        if(o>0){
            curr+="(";
            generate(o-1,c,curr,res);
            curr.pop_back();
        }
        if(o<c){
            curr+=")";
            generate(o,c-1,curr,res);
            curr.pop_back();
        }
    }
};
