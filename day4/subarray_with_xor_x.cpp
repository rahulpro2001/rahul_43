int Solution::solve(vector<int> &A, int B) {
    int xr =0;int cnt=0;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++)
    {
        xr^=A[i];
        if(xr==B)cnt++;
        if(mp[xr^B]!=0)cnt+=mp[xr^B];
        mp[xr]++;
    }
    return cnt;
}
