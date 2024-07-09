#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,i,j,sum=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    if(j%2!=0)
                    {
                        sum=sum+j;
                    }
                    if((i/j)!=j&&(i/j)%2!=0)
                    {
                        sum=sum+(i/j);
                    }
                }
            }
        }
        cout<<sum<<endl;
        
    }
    
}