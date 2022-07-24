void dfs(int node,stack<int> &ans,vector<int> &vis,vector<int> adj[])
	{
	    for(int it:adj[node])
	    {
	        if(!vis[it])
	        {
	            vis[it] = 1;
	            dfs(it,ans,vis,adj);
	        }
	    }
	    ans.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans,vis(V);
	    stack<int> st;
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            vis[i]=1;
	            dfs(i,st,vis,adj);
	        }
	    }
	    while(!st.empty())
	    {
	        ans.push_back(st.top());st.pop();
	    }
	    return ans;
	}