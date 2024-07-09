#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll  a[n],i,dp[n];
        stack<int>st;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        dp[0]=1;
        st.push(a[0]);
        for(i=1;i<n;i++)
        {
            if(!st.empty()&&st.top()<=a[i])
            {
                st.push(a[i]);
                dp[i]=dp[i-1]+st.size();

            }
            else
            {
                while(!st.empty())
                {
                    st.pop();
                }
                st.push(a[i]);
                dp[i]=dp[i-1]+st.size();
            }
        }
        cout<<dp[n-1]<<endl;
        

    }

}