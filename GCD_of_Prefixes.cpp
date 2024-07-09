#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod=1e9+7;
#define pi acos(-1);
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll flag=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]%a[i+1]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}