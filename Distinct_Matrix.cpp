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
    if(n<=2){
        cout<<-1<<endl;
        continue;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        cout<<"1";
    }
    cout<<endl;
   }
 
}