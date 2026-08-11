class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftp(n);
        vector<int>rightp(n);
        leftp[0]=1;
        rightp[n-1] = 1;
        vector<int> res(n); 


        for(int i=1;i<n;i++) {
            leftp[i] = nums[i-1] * leftp[i-1];
        }
        for(int i = n-2; i>=0;i--) {
            rightp[i] = nums[i+1] * rightp[i+1];
        }
        for(int i=0;i<n;i++) {
            res[i] = leftp[i]*rightp[i];
        }
        return res;

        
    }
};
