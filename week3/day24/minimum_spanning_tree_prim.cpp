 int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> key(V,INT_MAX);
        vector<bool> mstpart(V,false);
        
        key[0]=0;
        
        for(int i=0;i<V-1;i++)
        {
            int mini = INT_MAX,u;
            for(int v=0;v<V;v++) if(mstpart[v]==false && key[v]<mini) mini = key[v],u=v;
            mstpart[u]=true;
            for(auto it:adj[u])
            {
                int child = it[0];
                int wt = it[1];
                if(mstpart[child]==false && key[child]>wt) key[child] = wt;
            }
        }
        
        int sum=0;
        for(int i=0;i<V;i++) sum+=key[i];
        return sum;
    }