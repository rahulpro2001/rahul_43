#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        long long sum = 0;
        for(int i =0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==1 || sum%2)cout<<"CHEF\n";
        else cout<<"CHEFINA\n";
    }
    return 0;
}