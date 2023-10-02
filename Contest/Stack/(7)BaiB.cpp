#include <bits/stdc++.h>
using namespace std;
//Trung -> Hau
int main()
{
	string s;cin>>s;
	stack<char> st;
	string ans="";
	int i=0;
	int uutien[1000];
	uutien['*']=uutien['/']=2;
	uutien['+']=uutien['-']=1;
	uutien['(']=0;
	while(i<s.length())
	{
		if(s[i]<='Z'&&s[i]>='A')
		{
			ans=ans+s[i];
		}
		else
		{
			if(s[i]=='(')
			{
				st.push(s[i]);
			}
			else
			{
				if(s[i]==')')
				{
					while(!st.empty() && st.top()!='(') //chay cho den khi gap dau ( de ket thuc bieu thuc
					{
						ans=ans+st.top();
						st.pop();
					}
					st.pop(); //xoa di ki tu '(' 
				}
				else //Neu ki tu cho vao la dấu
				{
					while(!st.empty() && uutien[st.top()] >= uutien[s[i]]) //chay cho den khi gap dau ( de ket thuc bieu thuc
					{
						ans=ans+st.top();
						st.pop();
					}
					st.push(s[i]);  
				}
			}
		}
		i++;
	}
	while(!st.empty())
	{
		ans=ans+st.top();
		st.pop();
	}
	cout<<ans;
	return 0;
}
