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
        for(i=1;i<=k;i++){
            cout<<i<<" ";
        }
        for(j=k+2;j<=n;j=j+2){
            cout<<j<<" ";
        }
        for(j=k+1;j<=n;j=j+2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 
 
}