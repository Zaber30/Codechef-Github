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
     ll b[32]={0};
     for(i=0;i<n;i++){
        for(j=0;j<32;j++){
            if((a[i]&1<<j)){
                b[j]++;
            }
        }
     }
    ll sum=0;
     for(j=0;j<32;j++){
        sum+=(b[j]+k-1)/k;
     }
     cout<<sum<<endl;
   }
 
}