#include <bits/stdc++.h>
using namespace std;
//Trung -> Hau
int main()
{
	string s;cin>>s;
	stack<string> st;
	int i=0;
	while(i<s.length())
	{
		if(s[i]<='Z'&&s[i]>='A')
		{
			string tmp=""; tmp=tmp+s[i];
			st.push(tmp);
		}
		else
		{
			string s1=st.top();
			st.pop();
			string s2=st.top();
			st.pop();
			
			string res="";
			if(s1.length()>1) s1='('+s1+')';
			if(s2.length()>1) s2='('+s2+')';
			
			res=s2+s[i]+s1;
			st.push(res);
		}
		i++;
	}
	cout<<st.top();
}
