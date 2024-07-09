#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
     ll t;
     cin>>t;
     while(t--){
        ll n,x,i,j,k;
        cin>>n>>x;
        ll a[n];
        ll mx=0;
        map<ll,ll>mp,mp1;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            mp1[a[i]^x]++;
            mx=max(mx,mp[a[i]]);
        }
        if(x==0){
            cout<<mx<<" "<<0<<endl;
            continue;
        }
        ll temp=0,temp1=INT_MAX;
        
        for(i=0;i<n;i++){
            if(mp[a[i]]+mp1[a[i]]>temp){
                temp=mp[a[i]]+mp1[a[i]];
                temp1=mp1[a[i]];
            }
            else if(mp[a[i]]+mp1[a[i]]==temp){
                temp1=min(temp1,mp1[a[i]]);
            }
        }
        cout<<temp<<" "<<temp1<<endl;


     }
 
}