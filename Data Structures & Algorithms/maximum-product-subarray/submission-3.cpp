class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxProd  = nums[0];
        int minProd = nums[0];
        int res = nums[0];

        for(int i = 1; i < n; i++) {

            int x = nums[i];
            int oldMax = maxProd;
            int oldMin = minProd;
            
            maxProd = max({x,x*oldMax,x*oldMin});
            minProd = min({x,x*oldMax,x*oldMin});

            res = max(res,maxProd);
        }
        return res;
    }
};
