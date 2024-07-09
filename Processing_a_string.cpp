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
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                sum=sum+(s[i]-'0');
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}