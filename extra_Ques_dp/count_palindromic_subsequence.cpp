    /*You are required to complete below method */
    long long int  countPS(string s)
    {
        long long int len = 0;
        int mod = 1000000007;
        vector<vector<long long int>> dp(s.size(),vector<long long int> (s.size()));
        for(int g = 0;g<s.size();g++)
        {
            for(int i=0,j=g;j<dp[0].size();i++,j++)
            {
                if(g==0)dp[i][j] = 1;
                else if(g==1) dp[i][j] = s[i]==s[j]?3:2;
                else dp[i][j] = s[i]==s[j]?(dp[i+1][j]+dp[i][j-1]+1)%mod:(dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%mod;
                // len = max(len,dp[i][j]);
            }
        }
        return dp[0][dp[0].size()-1];
    }