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
         sort(a,a+n);
         if(n==1)
         {
            cout<<"0"<<endl;
            continue;
         }
         ll ma=INT_MIN;
         for(i=0;i<n-1;i++)
         {
            ma=max(ma,a[i]%a[i+1]);
         }
         cout<<ma<<endl;
    }
    return 0;
}