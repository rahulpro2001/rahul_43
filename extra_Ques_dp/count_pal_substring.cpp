class Solution {
public:
    int countSubstrings(string s) {
        int cnt = 0;
        vector<vector<bool>> dp(s.size(),vector<bool> (s.size(),false));
       for(int g = 0;g<dp.size();g++)
       {
             for(int i=0,j=g;j<dp[0].size();i++,j++)
            {              
                if(g==0) dp[i][j] = true;
                else if(g==1) dp[i][j] = s[i]==s[j];
                else dp[i][j] = s[i]==s[j] and dp[i+1][j-1];
                if(dp[i][j])cnt++;
            }
       }
        return cnt;
    }
};