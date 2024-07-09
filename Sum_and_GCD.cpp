#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        n=unique(a,a+n)-a;

        if(n==1)
        {
            cout<<a[0]*2<<endl;
        }
        else if(n==2)
        {
            cout<<(a[0]+a[1])<<endl;
        }
        else
        {
             ll b=a[0];
             for(i=1;i<n-2;i++)
             {
                b=__gcd(b,a[i]);
             }
            ll l=(__gcd(b,a[n-2]))+a[n-1];
              ll m=(__gcd(b,a[n-1]))+a[n-2];
            cout<<max(l,m)<<endl;
            
        }
    }
}