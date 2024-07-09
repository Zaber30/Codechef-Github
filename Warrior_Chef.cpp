#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,h;
        cin>>n>>h;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=accumulate(a,a+n,0);
        sort(a,a+n);
        if(sum<h){
            cout<<0<<endl;
            continue;
        }
        else{
            ll sum1=0;
            for(i=n-1;i>=0;i--){
                sum1+=a[i];
                if(sum1>=h){
                    break;
                }
            }
            cout<<a[i]<<endl;
        }
    }
 
}