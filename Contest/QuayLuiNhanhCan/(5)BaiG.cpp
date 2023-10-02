#include <bits/stdc++.h>
using namespace std;
int a[100];
int n,s;
int res=1e9;
int luu[100];

void Try(int i,int tongtien,int cnt)
{
	if(tongtien==s)
	{
		res=min(cnt,res);
	}
	if(cnt>res||i>n||tongtien>s) return;
	for(int j=0;j<=1;j++)
	{
		tongtien+=a[i]*j;
		cnt+=j;
		if(i<=n) Try(i+1,tongtien,cnt);
		tongtien-=a[i]*j;
		cnt-=j;
	}
	return;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		res=1e9;
		cin>>n>>s;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		Try(1,0,0);
		if(res==1e9) cout<<"-1"<<"\n";
		else cout<<res<<"\n";
	}
	return 0;
}