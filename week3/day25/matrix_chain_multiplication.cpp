 int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N-1,vector<int> (N-1));
        for(int g= 0;g<dp.size();g++)
        {
            for(int i = 0,j= g;j<dp[0].size();i++,j++)
            {
                if(g==0)dp[i][j] = 0;
                else if(g==1) dp[i][j] = arr[i] * arr[j]*arr[j+1];
                else
                {
                    int mini = INT_MAX;
                    for(int k = i;k<j;k++)
                    {
                        int first = dp[i][k];
                        int second = dp[k+1][j];
                        int cost = arr[i]*arr[k+1]*arr[j+1];
                        mini= min(mini,first+second+cost);
                    }
                    dp[i][j] = mini;
                }
            }
        }
        return dp[0][dp[0].size()-1];
    }

    // (N^3)
    // sc- n^2