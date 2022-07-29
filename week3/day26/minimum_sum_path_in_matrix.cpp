// int minPathSum(vector<vector<int>>& grid) {
//         for(int i = grid.size()-2;i>=0;i--)grid[i][grid[0].size()-1]+=grid[i+1][grid[0].size()-1];
//          for(int i = grid[0].size()-2;i>=0;i--)grid[grid.size()-1][i]+=grid[grid.size()-1][i+1];
//         for(int i=grid.size()-2;i>=0;i--)
//         {
//             for(int j = grid[0].size()-2;j>=0;j--)
//             {
//                 grid[i][j] +=min(grid[i+1][j],grid[i][j+1]);
//             }
//         }
//         return grid[0][0];
//     }

    // recusrion
     int func(int r,int c,vector<vector<int>>& grid,int &sum,vector<vector<int>> &dp)
    {
        if(r==grid.size() || c==grid[0].size())return INT_MAX;
        if(dp[r][c]!=-1)return dp[r][c];
        
        if(r==grid.size()-1 and c==grid[0].size()-1) return grid[r][c];
            
        int a = func(r+1,c,grid,sum,dp);
        int b = func(r,c+1,grid,sum,dp);
        dp[r+1][c]  = a;
        dp[r][c+1] = b;
        return grid[r][c]+min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum = 0;
        vector<vector<int>> dp(grid.size()+1,vector<int> (grid[0].size()+1,-1));
       int res =  func(0,0,grid,sum,dp);
        return res;
    }