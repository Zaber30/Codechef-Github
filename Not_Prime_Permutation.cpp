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
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n<=2){
            cout<<-1<<endl;
            continue;
        }
        ll one,three;
        for(i=0;i<n;i++){
            if(a[i]==1){
                one=i;
            }
            else if(a[i]==3){
                three=i;
            }
        }
        swap(a[one],a[three]);
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
 
}