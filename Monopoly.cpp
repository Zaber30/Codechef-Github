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
        int p,q,r,s,i,sum=0,flag=0;
        cin>>p>>q>>r>>s;
        int a[4],b[4];
        a[0]=p;
        a[1]=q;
        a[2]=r;
        a[3]=s;
        for(i=0;i<4;i++)
        {
            sum=sum+a[i];
        }
        for(i=0;i<4;i++)
        {
            b[i]=abs(sum-a[i]);
        }
        for(i=0;i<4;i++)
        {
            if(a[i]>b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
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