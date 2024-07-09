#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
    ll n,k,i,j;
    cin>>n>>k;
    
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]%k;
    }
    sort(a,a+n);
     ll ans=(a[n-1]-a[0]);
    for(i=0;i<n-1;i++){
        ans=min(ans,a[i]+k-a[i+1]);
          
    }
    cout<<ans<<endl;
   }
 
}