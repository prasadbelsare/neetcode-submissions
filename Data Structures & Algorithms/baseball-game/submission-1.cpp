class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>score;
        int res=0;
        for(const string& c:operations){
            if(c=="+"){
                int a=score.top();score.pop();
                int b=score.top();
                int newTop=b+a;
                score.push(a);
                score.push(b+a);
                res +=newTop;
            }else if(c=="C"){
                res -= score.top();
                score.pop();
            }else if(c=="D"){
                score.push(score.top()*2);
                res += score.top();
            }else{
                score.push(stoi(c));
                res += score.top();
            }
        }
        return res;
    }
};