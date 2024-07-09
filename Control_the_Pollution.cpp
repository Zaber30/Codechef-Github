#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,i,j,ans=INT_MAX;
        cin>>n>>x>>y;
        ll r=n%100;
        ans=min(((n/100)*x),((n/4)*y));
        ll cnt=0;
        if(r%4==0)
        {
            cnt=r/4;

        }
        else
        {
            cnt=(r/4)+1;
        }
        ans+=min((1*x),(cnt*y));
        cout<<ans<<endl;

        

    }
}