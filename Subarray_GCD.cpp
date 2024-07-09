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
    ll a[n],i,sum;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sum=a[i];
    for(i=0;i<n;i++)
    {
        sum=__gcd(sum,a[i]);
    }
    if(sum>1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<n<<endl;
    }
    }
    

}