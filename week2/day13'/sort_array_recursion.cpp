#include <bits/stdc++.h>
using namespace std;
void insert(int val,vector<int> &v)
{
    if(v.size()==0 || v[v.size()-1]<val){v.push_back(val);return;}
    int x = v[v.size()-1];  v.pop_back();
    insert(val,v);
    v.push_back(x);
}
void sort(vector<int> &v,int n)
{
    if(v.size()==1)return;
    int val = v[v.size()-1];
    v.pop_back();
    sort(v,n);
    insert(val,v);
}
int main()
{
    int n;cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v,n);
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}
