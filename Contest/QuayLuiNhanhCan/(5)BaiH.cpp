#include <bits/stdc++.h>
using namespace std;
int sosanh(string a,string b)
{
	if(a.length()>b.length()) return 1;
	else if(a.length()==b.length())
	{
		if(a>=b) return 1;
	}
	return 0;
}

string s;
int res=0;
void count(string tmp,int cnt)
{
	if(tmp.length()>0&&sosanh(s,tmp)==1&&cnt<=2)
	{
		res++;
	}
	if(cnt>2) return;
	if(sosanh(s,tmp)==0) return;
	for(int j=0;j<=9;j++)
	{
		if(j==0&&tmp.length()==0) 
		{
			continue;
		}
		else
		{
			int dem=0;
			set<int> se;
			for(int l=0;l<tmp.length();l++)
			{
				se.insert((int)tmp[l]-48);
			}
			se.insert(j);
			count(tmp+((char)(j+48)),se.size());
		}
	}
	return;
}

int main()
{
	cin>>s;
	string z="";
	count(z,0);
	cout<<res;
	return 0;
}
