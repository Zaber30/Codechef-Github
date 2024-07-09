#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi acos(-1);
int main()
{
    fast;
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,m,j,k;
        cin>>n>>m;
        int a[n],b[m+1]={0},multiple[m+1]={0};
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            b[a[j]]++;
        }
        for(j=1;j<=m;j++)
        {
            for(k=j;k<=m;k=k+j)
            {
                if(b[k]!=0)
                {
                    multiple[j]+=b[k];
                }
            }
        }
        int ans=0;
        for(j=1;j<=m;j++)
        {
            ans=max(ans,multiple[j]);
            
        }
        cout<<(n-ans)<<endl;
        



    }
    return 0;
}