#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Faster();
    int n;cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++) cin>>a[i];
    int nhohon[n+5];
    int i=n-1;
    stack<int>st;
    while(i>=0)
    {
        if(st.empty())
        {
            nhohon[i]=-1;
            st.push(i);
            i--;
        }
        else
        {
            if(a[i]>a[st.top()])
            {
                nhohon[i]=a[st.top()];
                st.push(i);
                i--;
            }
            else
            {
                st.pop();
            }
        }
    }
    int lonhon[n+5];
    stack<int>st2;
    i=n-1;
    while(i>=0)
    {
        if(st2.empty())
        {
            lonhon[i]=-1;
            st2.push(i);
            i--;
        }
        else
        {
            if(a[i]<a[st2.top()])
            {
                lonhon[i]=st2.top();
                st2.push(i);
                i--;
            }
            else
            {
                st2.pop();
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(lonhon[i]==-1) cout<<"-1";
        else cout<<nhohon[lonhon[i]];
        if(i!=n-1) cout<<" ";
    }
    return 0;
}