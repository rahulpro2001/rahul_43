    void dfs(int node,vector<int> &ans,vector<int> &vis,vector<int> adj[])
    {
        ans.push_back(node);
        for(int it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                dfs(it,ans,vis,adj);
            }
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans,vis(V);
        vis[0]=1;
        dfs(0,ans,vis,adj);
        return ans;
    }