class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> suffix(n);

        suffix[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--) {
            suffix[i] = max(suffix[i+1],prices[i]);
        }
        int ans=0;

        for(int i=0;i<n;i++) {
            int x = max(suffix[i]-prices[i],ans);

            ans = x;
        }
        return ans;
        
    }
};
