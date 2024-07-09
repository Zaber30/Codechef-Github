#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 
     ll t;
     cin>>t;
     while(t--){
        ll n,i,j,k;
        cin>>n>>k;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll flag=0,cnt=0,sum=0;
        for(i=0;i<n;i++){
             if(sum+a[i]<=k){
                sum=sum+a[i];
                cnt++;
             }
             else{
                if(sum+((a[i]+2-1)/2)<=k&&flag==0){
                    sum+=((a[i]+2-1)/2);
                    cnt++;
                    flag=1;

                }
             }
        }
        cout<<cnt<<endl;
     }
 
}