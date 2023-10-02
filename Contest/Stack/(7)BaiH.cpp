#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5][n+5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	stack<int> select;
	int i=0;
	while(i<n)
	{
		if(select.empty())
		{
			select.push(i);
			i++;
		}
		else
		{
			if(a[i][select.top()]==0) 
			{
				if(a[select.top()][i]==1) select.pop();
				else
				{
					select.pop();
					i++;
				}
			}
			else //neu no quen tk top() thi no ko the la celeb nua => xet tk sau
			{
				if(a[select.top()][i]==1) 
				{
					select.pop(); //neu tk o dau "biet" thi auto out
					i++;
				}
				else i++;
			}
		}
	}
	if(!select.empty()) cout<<select.top()<<" is celebrity";
	else cout<<"No celebrity detected";
	return 0;
}
