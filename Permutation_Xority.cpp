#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
    if(n&1)
    {
        for(i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;

      

    }
    else
    {
        if(n==2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2 3 1 4"<<" ";
            for(i=5;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    }

}