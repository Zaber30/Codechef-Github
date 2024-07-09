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
        int n,cnt=0,mnt=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
            else 
            {
                mnt++;
            }
        }
        if(cnt==mnt)
        {
            cout<<(cnt*2)<<endl;
        }
        else
        {
            cout<<(min(cnt,mnt)*2)+1<<endl;
        }

    }
    return 0;
}