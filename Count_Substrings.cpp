#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
         ll i,cnt=0,sum=0;
         for(i=0;i<n;i++)
         {
            if(s[i]!='1')
            {
                cnt++;
            }
            else
            {
                sum=sum+(i+1-cnt);

            }
         }
         cout<<sum<<endl;
    }
}