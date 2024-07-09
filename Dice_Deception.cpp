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
    }
    sort(a,a+n);
    ll cnt=0,sum=0;
    for(i=0;i<n;i++){
        ll mx=max(7-a[i],a[i]);
        if(mx!=a[i]&&(cnt+1)<=k){
            cnt++;
            a[i]=(7-a[i]);
            sum+=a[i];
        }
        else{
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
   }
 
}