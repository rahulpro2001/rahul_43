class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len = 0;
        vector<vector<int>> dp(s.size(),vector<int> (s.size()));
        for(int g = 0;g<s.size();g++)
        {
            for(int i=0,j=g;j<dp[0].size();i++,j++)
            {
                if(g==0)dp[i][j] = 1;
                else if(g==1)dp[i][j] = s[i]==s[j]?2:1;
                else dp[i][j] = s[i]==s[j]?dp[i+1][j-1]+2:max(dp[i+1][j],dp[i][j-1]);
                len = max(len,dp[i][j]);
            }
        }
        return len;
    }
};


// 0---diagonal 1
// 1---diagonal  if equal -- 2 length else 1 length
// else  equal add 2 in digonal element else max of suffix and prefix
