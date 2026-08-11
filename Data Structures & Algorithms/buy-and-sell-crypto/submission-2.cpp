class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = 1;
        int res = 0;
        int profit = 0;
        while(j<prices.size()) {
            if(prices[i]>prices[j]) {
                i=j;
                j++;
            }else{
                profit = prices[j]-prices[i];
                res = max(profit,res);
                j++;
            }
        }
        return res;
    }
};
