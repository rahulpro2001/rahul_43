#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long sum = 0;
        long long ans=0;
        for(int i= 1;i<=a;i++)
        {
            if(sum==c)break;
            if(sum+b>=c)
            {
                int temp = c-sum;
                ans+=temp*temp;
                sum +=temp;
            }
            else
            {
                ans+=b*b;
                sum+=b;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}