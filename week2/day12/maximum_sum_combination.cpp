vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
      sort(A.begin(),A.end());
   sort(B.begin(),B.end());
    priority_queue<pair<int,pair<int,int>>> pq;
    set<pair<int,int>> st;
    int i = A.size()-1;
    int j = B.size()-1;
    pq.push({A[i]+B[j],{i,j}});
    vector<int> ans;
    while(ans.size()!=C)
    {
        pair<int,pair<int,int>> temp = pq.top();pq.pop();
        int sum = temp.first;
        int ni = temp.second.first;
        int nj = temp.second.second;
        ans.push_back(sum);
        if(ni>0 and st.count({ni-1,nj})==0)
        {
            st.insert({ni-1,nj});
            pq.push({A[ni-1]+B[nj],{ni-1,nj}});
        }
        if(nj>0 and !st.count({ni,nj-1}))
        {
            st.insert({ni,nj-1});
            pq.push({A[ni]+B[nj-1],{ni,nj-1}});
        }
    }
    return ans;
}
