class Solution {
public:
    vector<vector<int>>dp;
    int solve(int prev, int curr, vector<int>&nums) {
        if(curr == nums.size()) {
            return 0;
        }
        if(dp[prev+1][curr] != -1) {
            return dp[prev+1][curr];
        }

        if(prev == -1 || nums[curr] > nums[prev]) {
            int pick = 1+solve(curr, curr+1, nums);

            int dont_pick = solve(prev,curr+1,nums);
            return dp[prev+1][curr] =  max(pick,dont_pick);
        }
        return dp[prev+1][curr] = solve(prev,curr+1,nums);
    }
    int lengthOfLIS(vector<int>& nums) {
        dp.resize(nums.size(),vector<int>(nums.size(),-1));
        return solve(-1,0,nums);
    }
};
