#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
    ll n,q;
    cin>>n>>q;
    ll a[n+2],i,j,k,pref[n+2]={0},l,r;
    vector<pair<ll,ll>>p;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=q;i++){
        cin>>l>>r;
        pref[l]++;
        pref[r+1]--;
    }
    for(i=1;i<=n;i++){
        pref[i]=pref[i]+pref[i-1];
    }
    for(i=1;i<=n;i++){
        p.push_back(make_pair(pref[i],i));
    }
    sort(a+1,a+n+1);
    sort(p.begin(),p.end());
    sort(pref+1,pref+n+1);
    ll ans[n+1];
    for(i=1;i<=n;i++){
        ans[p[i-1].second]=a[i];
    }
    ll sum=0;
    for(i=1;i<=n;i++){
        sum=sum+(pref[i]*a[i]);
    }
    cout<<sum<<endl;
    for(i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   }
 
}

