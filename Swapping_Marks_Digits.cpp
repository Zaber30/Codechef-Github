#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s,s1;
        cin>>s>>s1;
        string temp=s;
        string temp1=s1;
        reverse(temp.begin(),temp.end());
        reverse(temp1.begin(),temp1.end());
        
        if(s>s1||s>temp1||temp>s1||temp>temp1){
            cout<<"Yes"<<endl;
        }
       
        else{
            cout<<"No"<<endl;
        }
    }
 
 
}