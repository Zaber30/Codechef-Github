#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main()
{
    ll n,i,m;
    cin>>n>>m;
    ll a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        if(a[i]<n+1)
        cout<<"0"<<endl;
        else if(a[i]>=(n+1)&&a[i]<=((n*2)+1))
        cout<<(a[i]-n-1)<<endl;
        else 
        cout<<((3*n-a[i])+1)<<endl;;

    }
}