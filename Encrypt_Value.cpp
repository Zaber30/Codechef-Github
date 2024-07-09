#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;
 
int main()
{
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll result=a[0];
    for(ll i=1;i<n;i++){
        if((result*a[i])>=(result+a[i])){
            result*=a[i];
            result%=mod;
        }
        else{
            result+=a[i];
            result%=mod;
        }
    }
    cout<<result<<endl;
  }
 
}