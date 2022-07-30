 vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dis(V,INT_MAX);
        dis[S] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,S});
        while(!pq.empty()){
            pair<int,int> temp = pq.top();pq.pop();
            int wt = temp.first;
            int node = temp.second;
            for(vector<int> it:adj[node])
            {
                int child  = it[0];
                int cwt = it[1];
                if(wt+cwt<dis[child])
                {
                    dis[child]= wt+cwt;
                    pq.push({dis[child],child});
                }
            }
        }
        return dis;
    }

    // O(n+e)log n  e--total edges we willbe traversing and n will be the total nodes
    // sc- O(n)+O(n)