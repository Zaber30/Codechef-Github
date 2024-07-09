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
        int n,m;
        cin>>n>>m;
        if((m*2)>=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}