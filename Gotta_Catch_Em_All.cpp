#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll n,x,y,i,j,k;
    cin>>n>>x>>y;
    ll a[n];
    ll sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=min(a[i]*x,y);
    }
    cout<<sum<<endl;


  }
 
}