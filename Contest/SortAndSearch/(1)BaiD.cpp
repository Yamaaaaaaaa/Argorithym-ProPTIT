#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

//LyDo TLE :Gioi han mang ko du,phai de>5.10^4
int search(int a[500500],int l,int r,int x)
{
	if(l<=r)
	{
		int h=(l+r)/2;
		if(a[h]==x) return 1;
		else if(a[h]<x) return search(a,h+1,r,x);
		else if(a[h]>x) return search(a,l,h-1,x);
	}
	return 0; 
}
void Solve()
{
	int n,k;
	cin>>n>>k;
	int a[500500];
	long long res=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
		int t=upper_bound(a+i,a+n,k-a[i])-lower_bound(a+i,a+n,k-a[i]);
		res+=t;
	}
	cout<<res<<"\n";
	return;
}
int main()
{
	Faster();
	int t;cin>>t;
	while(t--)
	{
		Solve();
	}
	return 0;
}
