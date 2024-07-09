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
        int sum1=0,sum2=0;
        sum1=sum1+(s[0]-'0');
        sum1=sum1*10+(s[1]-'0');
        sum2=sum2+(s[3]-'0');
        sum2=sum2*10+(s[4]-'0');
        //cout<<sum1<<sum2<<endl;
        if(sum1<=12&&sum2<=12)
        {
            cout<<"BOTH"<<endl;
        }
        else if(sum1<=12)
        {
            cout<<"MM/DD/YYYY"<<endl;
        }
        else 
        {
            cout<<"DD/MM/YYYY"<<endl;
        }


  }
    return 0;
}