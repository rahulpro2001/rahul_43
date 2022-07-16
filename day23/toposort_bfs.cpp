	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans;
	    vector<int> in(V,0);
	    for(int i=0;i<V;i++)
	    {
	        for(int j = 0;j<adj[i].size();j++)in[adj[i][j]]++;
	    }
	    queue<int> q;
        for(int i = 0;i<V;i++)if(in[i]==0)q.push(i);	    
	    while(!q.empty())
	    {
	        int node = q.front();
	        ans.push_back(node);
	        q.pop();
	        for(int it:adj[node])
	        {
	            in[it]--;
	            if(in[it]==0)q.push(it);
	        }
	    }
	    return ans;
	}