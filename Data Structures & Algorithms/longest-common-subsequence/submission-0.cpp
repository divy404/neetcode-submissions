class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i, int j, string text1, string text2) {
        if(i<0 || j < 0 ) {
            return 0;
        }
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        if(text1[i] == text2[j]) {
            return dp[i][j] = 1+solve(i-1,j-1,text1,text2);
        }

        return dp[i][j] = 0+max(solve(i-1,j,text1,text2), solve(i,j-1,text1,text2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i = text1.size();
        int j = text2.size();
        dp.resize(i,vector<int>(j,-1));

        return solve(i-1,j-1,text1,text2);
    }
};
