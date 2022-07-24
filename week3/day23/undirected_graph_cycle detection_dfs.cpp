   bool func(int par,int node,vector<int> &vis,vector<int> adj[])
    {
        for(int it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                if(func(node,it,vis,adj))return true;
            }else if(it!=par)return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V);
        for(int i =0;i<V;i++)
        {
            if(!vis[i]){
                vis[i]=1;
                if(func(-1,i,vis,adj))return true;
            }
        }
        return false;
    }