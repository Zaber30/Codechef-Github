#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 ll t;
 cin>>t;
 while(t--){
    string s;
    ll n;
    cin>>n;
    cin>>s;
    if(s.size()==1){
        cout<<0<<endl;
        continue;
    }
    ll cnt=0;
    for(ll i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
 }
 
}