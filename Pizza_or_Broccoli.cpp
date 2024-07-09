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
       string s;
       cin>>s;
       vector<ll>left(n,0);
       vector<ll>right(n,0);
       ll curr=0;
       for(i=0;i<n;i++){
         left[i]=curr;
         if(s[i]=='1'){
            curr++;
         }
         else{
            curr=0;
         }
       }
       curr=0;
       for(i=n-1;i>=0;i--){
        right[i]=curr;
        if(s[i]=='1'){
            curr++;
        }
        else{
            curr=0;
        }
       }
       ll ans=0,start=0;
       for(start=0;start<n-k+1;start++){
         ll end=start+k-1;
         ans=max(ans,left[start]+right[end]);
       }
       cout<<ans+k<<endl;


    }
 
}