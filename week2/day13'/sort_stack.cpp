#include <bits/stdc++.h>
using namespace std;
void insert(int val,stack<int> &v)
{
    if(v.size()==0 || v.top()>val){v.push(val);return;}
    int x = v.top();v.pop();
    insert(val,v);
    v.push(x);
}
void sort(stack<int> &v,int n)
{
    if(v.size()==1)return;
    int val = v.top();v.pop();
    sort(v,n);
    insert(val,v);
}
int main()
{
    int n;cin>>n;
    stack<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
    v.push(x);
    }
    sort(v,n);
    for(int i=0;i<n;i++)
    {
     cout<<v.top()<<" ";v.pop();
    }
    return 0;
}
