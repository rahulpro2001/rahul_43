#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x>=n)cout<<0<<"\n";
        else
        {
            int temp = n-x;
            if(temp%4==0)cout<<temp/4<<"\n";
            else cout<<((n-x)/4)+1<<"\n";
        }
    }
    return 0;
}
