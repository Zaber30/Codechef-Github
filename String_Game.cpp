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
        stack<char>st;
        int cnt=0;
        cin>>s;
        if(s.size()==1)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            for(int i=0;i<s.size()-1;)
            {
                if(s[i]!=s[i+1])
                {
                    cnt++;
                    i=i+2;
                }
                else if(st.size()>=1)
                {
                    if(st.top()!=s[i])
                    {
                        cnt++;
                        st.pop();
                        i++;
                    }

                }
                else
                {
                    st.push(s[i]);
                    i++;
                }
                

            }
        }
        if(cnt%2==0&&st.size()>=0)
        {
            cout<<"Ramos"<<endl;
        }
        else if(cnt%2!=0&&st.size()>=0)
        {
            cout<<"Zlaton"<<endl;

        }
        
    }
    return 0;
}