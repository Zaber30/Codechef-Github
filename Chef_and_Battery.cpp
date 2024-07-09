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
        int n;
        cin>>n;
        if(n<50)
        {
            if((50-n)%2==0)
            {
                cout<<(50-n)/2<<endl;
            }
            else
            {
                cout<<((50-n+1)/2)+2<<endl;
            }
            
        }
        else
        {
            if((n-50)%3==0)
            {
                cout<<((n-50)/3)<<endl;
            }
            else if((n-50)%3==1)
            {
                cout<<((n-50)/3)+2<<endl;
            }
            else
            {
                cout<<((n-50)/3)+4<<endl;
            }
        }
    }
    return 0;
}