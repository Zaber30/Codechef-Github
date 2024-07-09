
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const ll mod=1e9+7;
#define pi acos(-1);
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0)
        {
            cout<<"1"<<endl;
        }
        else{
        ll sum=(n*2)+n;
        cout<<sum<<endl;
        }
    }
    return 0;
}