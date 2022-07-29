class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text2.size()+1,vector<int> (text1.size()+1,0));
        int maxi = 0;
        for(int i=dp.size()-2;i>=0;i--)
        {
            for(int j= dp[0].size()-2;j>=0;j--)
            {
                if(text1[j]==text2[i]) dp[i][j] = dp[i+1][j+1]+1;
                else dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                maxi = max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
};           
    //            ______
// if !equal then|
            //   |
            //   |
            // else \
            //        \+1