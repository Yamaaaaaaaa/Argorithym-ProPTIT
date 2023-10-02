#include <bits/stdc++.h>
using namespace std;
int search(int a[],int l,int r,int x)
{
	if(l<=r)
	{
		int h=l+(r-l)/2;
		if(a[h]==x) return 1;
		else if(a[h]<x) return search(a,h+1,r,x);
		else if(a[h]>x) return search(a,l,h-1,x);
	}
	return 0; 
}
int main()
{
	int n,x;
	cin>>n>>x;
	int a[10000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	search(a,0,n-1,x);
	return 0;
}
