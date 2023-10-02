#include <bits/stdc++.h>
using namespace std;
//Hau->Tien
int main()
{
	string s;cin>>s;
	stack<string> st;
    int i=0;
    while(i<s.length())
    {
        if(s[i]<='Z'&&s[i]>='A')
        {
            string tmp="";tmp+=s[i];
            st.push(tmp);
        }
        else
        {
            string s1=st.top(); st.pop();
            string s2=st.top(); st.pop();

            string tmp=s[i]+s2+s1;
            st.push(tmp);
        }
        i++;
    }
    cout<<st.top();
	return 0;
}
