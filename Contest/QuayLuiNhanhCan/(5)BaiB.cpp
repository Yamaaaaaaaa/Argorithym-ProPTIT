//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
long long luu[50][50];
long long m,n,x;
long long res=0;
long long dem(long long m,long long n)
{
	if(luu[m][n]!=0) return luu[m][n];
	if(m<=0||n<=0) return 0;
	if(m==1 && n==1)
	{
		luu[m][n]=1;
		return 1;
	} 
	luu[m][n]= dem(m,n-1)+dem(m-1,n);
	return luu[m][n];
}
int main()
{
	Faster();
    int t;cin>>t;

	for(long long i=0;i<=49;i++)
	{
		for(long long j=0;j<=49;j++)
		{
			luu[i][j]=0;
		}
	}
	dem(25,25);
	// for(long long i=1;i<=25;i++)
	// {
	// 	for(long long j=1;j<=25;j++)
	// 	{
	// 		cout<<luu[i][j]<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	while(t--) 
	{
		res=0;
		cin>>m>>n;
		for(int i=1;i<=m*n;i++)
		{
			cin>>x;
		}
		cout<<luu[m][n]<<"\n";
	}
	return 0;
}