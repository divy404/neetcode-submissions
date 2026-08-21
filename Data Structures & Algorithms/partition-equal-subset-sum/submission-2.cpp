class Solution {
public:
    vector<vector<int>>dp;
    bool solve(int i, int t, vector<int>&nums) {
        if(t == 0) {
            return 1;
        }
        if(i==nums.size()) {
            return 0;
        }
        if(dp[i][t] != -1) {
            return dp[i][t];
        } 
        if(nums[i] <= t) {
            bool take_i = solve(i+1,t-nums[i],nums);
            bool skip = solve(i+1,t,nums);
            return dp[i][t] = take_i || skip;
        } 
        return dp[i][t] =  solve(i+1,t,nums);
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int t = 0;
        for(int x: nums) {
            sum +=x;
        }
        if(sum%2 != 0) {
            return false;
        }else {
            t = sum/2;
        }
        dp.assign(n, vector<int>(t + 1, -1)); 
        return solve(0,t,nums);
    }
};
