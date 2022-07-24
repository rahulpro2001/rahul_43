class Solution {
public:
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        queue<int> q;
        vector<int> color(n,-1);
        for(int i = 0;i<n;i++)
        {
            if(color[i]==-1)
            {
                color[i] = 1;
                q.push(i);
        
        while(!q.empty())
        {
            int node = q.front();q.pop();
            for(int it:g[node])
            {
                if(color[it]==-1)
                {
                    q.push(it);
                    color[it]=1-color[node];
                }
                else if(color[it]==color[node])return false;
            }
        }
                
            }
            
        }
       
        return true;
    }
};