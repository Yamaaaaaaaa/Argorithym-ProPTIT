#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int a[1005000];
int n;
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
	faster();
	int x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==x)
//		{
//			cout<<"YES";
//			return 0;
//		}
//	}
//	cout<<"NO";
	if(search(a,0,n-1,x)==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
