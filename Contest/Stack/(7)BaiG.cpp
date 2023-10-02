#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Faster();
    string s;
    cin>>s;
    int res=0;

    stack<char>st;
    int i=0;
    while(i<s.length())
    {
        if(s[i]=='(') 
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
                res+=2;
            }
        }
        i++;
    }
    cout<<res;
    return 0;
}