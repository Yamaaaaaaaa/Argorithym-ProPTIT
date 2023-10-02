#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void qsort(int a[],int l,int r)
{
	if(l>r) return;
	int left=l,right=r;
	int pivot=a[(l+r)/2];
	while(left<right)
	{
		while(a[left]<pivot) left++;
		while(a[right]>pivot) right--;
		if(left<=right) swap(a[left++],a[right--]);
	}
	if(left<r) qsort(a,left,r);
	if(right>l) qsort(a,l,right);
	return;
}
void solve()
{
	int n;cin>>n;
	int A[180000];
	int a=0;
	while(n--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			A[a++]=((int)s[i]-48);
		}
	}
	qsort(A,0,a-1);
	for(int i=0;i<a;i++)
	{
		cout<<A[i];
		if(i!=a-1) cout<<" ";
	}
}
int main()
{
	solve();
}
