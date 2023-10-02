#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
using namespace std;
void qsort(long long vec[],int l,int r)
{
	if(l>r) return;
	int left=l,right=r;long long pivot=vec[(l+r)/2];
	while (left<right)
	{
		while(vec[left]<pivot) left++;
		while(vec[right]>pivot) right--;
		if(left<=right) swap(vec[left++],vec[right--]);
	}
	if(left<r) qsort(vec,left,r);
	if(right>l) qsort(vec,l,right);
	return;
}
void Solve()
{
	int m,n,p; cin>>m>>n>>p;
	long long M[m+5],N[n+5],P[p+5];
	map<long long,int> mp1,mp2,mp3;
	for(int i=0;i<m;i++)
	{
		cin>>M[i];
		mp1[M[i]]++;
	} 
	for(int i=0;i<n;i++)
	{
		cin>>N[i];
		mp2[N[i]]++;
	} 
	for(int i=0;i<p;i++)
	{
		cin>>P[i];
		mp3[P[i]]++;
	} 

	long long A[15000];
	int a=0;
	qsort(P,0,p-1);
	int j=0;
	int k=0;
	for(int i=0;i<p;i++)
	{
	   if(mp1[P[i]]>0&&mp2[P[i]]>0&&mp3[P[i]]>0)
	   {
	     A[a++]=P[i];
	     mp1[P[i]]--;
	     mp2[P[i]]--;
	     mp3[P[i]]--;
	   }
	}
	if(a==0) cout<<"-1";
	for(int i=0;i<a;i++)
	{
		cout<<A[i];
		if(i!=a-1) cout<<" ";
	}
	cout<<"\n";
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
}
