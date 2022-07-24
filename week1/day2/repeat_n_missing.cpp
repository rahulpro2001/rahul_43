vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xr =0;
    for(auto it:A)xr^=it;
    for(int i=1;i<=A.size();i++)xr^=i;
    int msb = xr&-xr;
    int x=0,y=0;
    for(int i=0;i<A.size();i++)
    {
        if(msb&A[i])x^=A[i];
        else y^=A[i];
    }
    for(int i=1;i<=A.size();i++)
    {
        if(msb&i)x^=i;
        else y^=i;
    }
    for(int i=0;i<A.size();i++)
    {
        if(x==A[i]) return {x,y};
    }
  return {y,x};
}