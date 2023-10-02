#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int partition(int a[],int l,int r)
{
	int left=l;
	int right=r-1;int pivot=a[r];
	while(1)
	{
		while(left<=right&&a[left]>pivot) left++;
		while(left<=right&&a[right]<pivot) right--;
		if(left>=right) break;
		swap(a[left++],a[right--]);
	}
	swap(a[left],a[r]);
	return left;
}
void qsort(int a[],int l,int r)
{
	if(l<=r)
	{
		int pi=partition(a,l,r);
		qsort(a,l,pi-1);
		qsort(a,pi+1,r);
	}
	return;
}
void solve()
{
	string a,b;
	cin>>a>>b;
	int A[a.length()+5];
	int B[b.length()+5];
	for(int i=0;i<a.length();i++)
	{
		A[i]=((int)a[i]-48);
	}
	for(int i=0;i<b.length();i++)
	{
		B[i]=((int)b[i]-48);
	}
	qsort(B,0,b.length()-1);
	int i=0,j=0;
	while(i<a.length()&&j<b.length())
	{
		if(A[i]>=B[j])
		{
			i++;
		}
		else
		{
			swap(A[i],B[j]);
			i++;
			j++;
		}
	}	

	
	for(int i=0;i<a.length();i++)
	{
		cout<<A[i];
	}
	cout<<"\n";
//	for(int i=0;i<b.length();i++)
//	{
//		cout<<B[i];
//	}
	return;
}
int main()
{
	Faster();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
