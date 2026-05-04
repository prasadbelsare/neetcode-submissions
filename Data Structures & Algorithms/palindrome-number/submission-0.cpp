class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long num=x;
        long long revNum=0;

        while(x!=0){
            int digit=x%10;
            x/=10;
            revNum=(revNum*10)+digit;
        }
        return num==revNum;
    }
};