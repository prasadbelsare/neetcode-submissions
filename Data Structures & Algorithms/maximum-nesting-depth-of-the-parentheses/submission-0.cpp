class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        stack<char> st;
        for(char c :s){
            if(c=='('){
                st.push(c);
                res=max(res,(int)st.size());
            }else if(c==')'){
                st.pop();
            }
        }
        return res;
    }
};