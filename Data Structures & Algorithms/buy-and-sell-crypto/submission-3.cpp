class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        for(int &p:prices){
            if(p<buy){
                buy=p;
            }
            profit=max(profit, p-buy);
        }
        return profit;
    }
};
