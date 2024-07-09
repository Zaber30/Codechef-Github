#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
     ll n,i,j,k;
     cin>>n;
      if(n&1){
        cout<<-1<<endl;
        continue;
      }
      else{
        vector<ll>v(n+1,0);
        ll p=2;
        for(i=1;i<=n;i+=2){
            v[i]=p;
            p+=2;
        }
        p=1;
        for(i=2;i<=n;i+=2){
            v[i]=p;
            p+=2;
        }
        for(i=1;i<=n;i++){
            cout<<v[i]<<" ";
       }
       cout<<endl;


      }
    }
     
 
}