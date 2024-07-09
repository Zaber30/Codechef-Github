#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        i=0,j=n-1;
        int carry=0,cnt=0;
        while(i<j)
        {
            if(a[i]==a[j])
            {
                i++;
                j--;
            }
            else if(a[i]>a[j])
            {
                a[i]=(a[i]-a[j]);
                j--;
                cnt++;
            }
            else
            {
                a[j]=(a[j]-a[i]);
                i++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}