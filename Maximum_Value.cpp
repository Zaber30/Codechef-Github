#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll i,j,k;
    vector<ll>a(n);
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    ll temp1=a[0];
    ll temp2=a[1];
    ll temp3=a[n-1];
    ll temp4=a[n-2];
    ll sum1=(temp1*temp2)+(temp1-temp2);
    ll sum2=(temp1*temp2)+(temp2-temp1);
    ll sum3=(temp3*temp4)+(temp4-temp3);
    ll sum4=(temp3*temp4)+(temp3-temp4);
    cout<<max(sum1,max(sum2,max(sum3,sum4)))<<endl;

  }
 
}