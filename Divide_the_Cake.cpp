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
        if(360%n==0)
        {
            cout<<"y"<<" ";
        }
        else
        {
            cout<<'n'<<" ";
        }
        if(n<=360)
        {
            cout<<'y'<<" ";
        }
        else
        {
            cout<<'n'<<" ";
        }
        if((n*(n+1)/2)<=360)
        {
            cout<<"y"<<endl;
        }
        else
        {
            cout<<"n"<<endl;
        }
    }
}