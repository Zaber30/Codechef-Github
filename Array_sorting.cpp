#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
             ans=__gcd(ans,abs(a[i]-i-1));

        }
        cout<<ans<<endl;
    }
}