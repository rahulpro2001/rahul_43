 void func(int row,int col,vector<string> &ans,vector<int> &di,vector<int> &dj,vector<vector<int>> &m,int n,string temp, vector<vector<int>> &vis)
    {
        if(row==n-1 and col == n-1)
        {
            ans.push_back(temp);
            return;
        }
        string s = "DRLU";
        for(int i=0;i<4;i++)
        {
            int nxrow = row+di[i];
            int nxcol = col+dj[i];
            if(nxrow>=0 and nxcol>=0 and nxrow<n and nxcol<n and !vis[nxrow][nxcol] and m[nxrow][nxcol]==1)
            {
                vis[row][col]=1;
                func(nxrow,nxcol,ans,di,dj,m,n,temp+s[i],vis);
                vis[row][col]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        if(m[0][0]==0)return {};
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int> (n,0));
        vector<int> di = {+1,0,0,-1};
        vector<int> dj = {0,+1,-1,0};
        func(0,0,ans,di,dj,m,n,"",vis);
        return ans;
    }