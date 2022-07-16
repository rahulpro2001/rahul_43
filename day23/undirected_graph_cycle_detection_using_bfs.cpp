    bool isCycle(int V, vector<int> adj[]) {
        queue<pair<int,int>> q;
        vector<int> vis(V,0);
        for(int i = 0;i<V;i++)
        {
            if(!vis[i])
            {
                q.push({i,-1});
                vis[i] = 1;
                while(!q.empty())
                {
                    int node = q.front().first;
                    int par = q.front().second;
                    q.pop();
                    for(int it:adj[node])
                    {
                        if(!vis[it])
                        {
                            vis[it]=1;
                            q.push({it,node});
                        }else if(par!=it)return true;
                    }
                }
            }
        }
        return false;
    }