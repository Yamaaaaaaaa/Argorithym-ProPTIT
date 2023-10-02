#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[n]=1e9;
    stack<int> st;
    int res=0;
    int i=0;
    while(i<n)
    {
        if(st.empty() || a[i]>=st.top()) 
        {
            st.push(i);
            i++;
        }
        else
        {
            int id=st.top();
            st.pop();
            if(st.empty())
            {
                int chieudai= a[id];
                int chieurong= i;
                int canh=min(chieudai,chieurong);
                res=max(res,canh);
            }
            else
            {
                int chieudai= a[id];
                int chieurong= i-st.top()-1;
                int canh=min(chieudai,chieurong);
                res=max(res,canh);
            }
        }
    }

    cout<<res;
	return;
}
int main()
{
	Faster();
	Solve();
	return 0;
}  