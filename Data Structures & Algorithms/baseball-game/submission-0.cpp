class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>score;
        int res=0;
        for(const string& c:operations){
            if(c=="+"){
                int a=score.top();score.pop();
                int b=score.top();
                score.push(a);
                score.push(b+a);
            }else if(c=="C"){
                score.pop();
            }else if(c=="D"){
                score.push(score.top()*2);
            }else{
                score.push(stoi(c));
            }
        }
        while(!score.empty()){
            res+=score.top();
            score.pop();
        }
        return res;
    }
};