class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<bool>> dp(s.size(),vector<bool>(s.size(),false));
        int r,c;
        for(int g = 0;g<dp.size();g++)
        {
            for(int i = 0,j=g;j<dp[0].size();i++,j++)
            {
                if(g==0)dp[i][j] = true;
                else if(g==1) dp[i][j] = s[i]==s[j];
                else dp[i][j] = s[i]==s[j] and dp[i+1][j-1];
                if(dp[i][j])r=i,c=j;
            }
        }
        
        return s.substr(r,c-r+1);
    }
};