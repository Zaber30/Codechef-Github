#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 ll func(ll a[],ll n,ll k){
    ll i,j;
    
        ll sum=0;
        for(i=0;i<(1<<20);i++)
        {
            for(j=0;j<n;j++){
                if(i&(1<<j)){
                    sum+=a[j];
                    if(sum==k){
                        return 1;
                    }
                }
            }
            sum=0;
        }
        return 0;
 }
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
        
        if(func(a,n,k)==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 
}