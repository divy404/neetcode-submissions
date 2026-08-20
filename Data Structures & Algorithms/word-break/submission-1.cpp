class Solution {
public:
    vector<int>dp;
    bool solve(string &s, vector<string>& wordDict, int i) {

        if(i==s.size()) {
            return 1;
        }
        if(dp[i] != -1) {
            return dp[i];
        }

        for(string word: wordDict) {
            int sz = word.size();

            if(i+sz <= s.size() && s.substr(i,sz) == word) {
                if(solve(s,wordDict,i+sz)) {
                    return dp[i] = 1;
                }
            }
        }
        return dp[i] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        dp.resize(s.size(),-1);
       return solve(s,wordDict,0); 
    }
};
