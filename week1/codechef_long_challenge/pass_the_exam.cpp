#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=100 and a>=10 and b>=10 and c>=10)cout<<"PASS\n";
        else cout<<"FAIL\n";
    }
    return 0;
}