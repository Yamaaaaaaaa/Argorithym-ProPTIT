#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int n,a[50][50],visited[100],res=1e9,amin=1e9;
int b[100];//thanh pho tiep theo dc chon la thanh pho j
 
void Try(int i,int sum)
{
	for(int j=2;j<=n;j++)
	{
		if(visited[j]==0)
		{
			visited[j]=1;  
			b[i]=j;  
			sum+=a[b[i-1]][b[i]]; //tien tu b[i-1] ->b[i]
 
			if(i==n)  res=min(res,sum+a[b[n]][1]);
			else if(sum+ amin*(n-i+1) < res) Try(i+1,sum);
 
			visited[j]=0;  
			sum-=a[b[i-1]][b[i]];
		}
	}
}
int main()
{
	Faster();
	cin>>n;
	b[1]=1;
	visited[1]=1;
 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(i!=j) amin=min(amin,a[i][j]);
		}
	}
	Try(2,0);
    if(n==1) cout<<0;
	else cout<<res;
	return 0;
}