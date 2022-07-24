#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    vector<vector<int>> adj(n+1);
    for(pair<int,int> it:edges)
    {
        int x = it.first;
        int y = it.second;
        adj[x].push_back(y);
    }
    vector<int> in(n+1,0),ans;
    for(vector<int> it:adj)
    {
        for(int it1:it)in[it1]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++)if(in[i]==0)q.push(i);
    while(!q.empty())
    {
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for(int it:adj[node])
        {
            in[it]--;if(in[it]==0)q.push(it);
        }
    }
    if(ans.size()==n)return false;
    return true;
}