#include <bits/stdc++.h>
using namespace std;


bool isposs(int node,vector<int> &color,bool graph[101][101],int n,int col)
{
    for(int i=0;i<n;i++)
    {
        if(i!=node && graph[i][node]==1 && color[i]==col) return false;
    }
    return true;
}

bool func(int node,int m,int n,vector<int> &color,bool graph[101][101])
{
    if(node==n)
    return true;
    
    for(int i=1;i<=m;i++)
    {
        if(isposs(node,color,graph,n,i))
        {
        color[node]=i;
        if(func(node+1,m,n,color,graph)) return true;
        color[node]=0;   
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> color(V,0);
    if(func(0,m,V,color,graph)) return true;
    return false;
}




int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends