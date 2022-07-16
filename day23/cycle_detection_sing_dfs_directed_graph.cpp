bool dfs(vector<int> &dfsvis, vector<int> &vis,int node,vector<vector<int>> &adj)
{
    for(int it:adj[node])
    {
        if(!vis[it])
        {
            vis[it]=dfsvis[it] =1;
            if(dfs(dfsvis,vis,it,adj))return true;
            vis[it]=0;
        }
        else if(dfsvis[it])return true;
    }
    return false;
}


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    vector<vector<int>> adj(n+1);
    for(pair<int,int> it:edges)
    {
        int x = it.first;
        int y = it.second;
        adj[x].push_back(y);
    }
    vector<int> vis(n+1,0),dfsvis(n+1);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfsvis[i] = vis[i] =1;
            if(dfs(dfsvis,vis,i,adj))return true;
            vis[i] = 0;
        }
    }
    return false;
}