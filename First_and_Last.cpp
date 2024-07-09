#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sum=sum+a[0]+a[n-1];
        for(i=0;i<n-1;i++)
        {
            int temp=a[i]+a[i+1];
            sum=max(sum,temp);

        }
        cout<<sum<<endl;
    }

}