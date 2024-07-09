#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
      ll t;
      cin>>t;
      while(t--){
        ll n,i,j,k,x,temp,temp1,cnt=0,cnt1=0;
        cin>>n>>x;
        vector<ll>a(n);
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a[i];
           if(a[i]%2==1){
            temp1=a[i];
            cnt++;
           }
           else{
            cnt1++;
            v.push_back(a[i]);

           }

        }
        if(x%2==0){
            if(cnt==0){
                cout<<-1<<endl;
            }
            else{
               cout<<cnt1<<endl;
        } 
            
            
        }
        else{
            cout<<(cnt1+2-1)/2<<endl;
        }
       

      }
 
}