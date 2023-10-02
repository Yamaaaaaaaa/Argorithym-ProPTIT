#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{
	int n;long long k;cin>>n>>k;
	long long a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int i=0,j=0;
	long long tong=0;
	int ok=0;
	while(1)
	{
		if(j>=n) break;
		if(tong==k)
		{
			ok=1;
			break;
		}
		else if(tong>k) 
		{
			tong-=a[i];
			i++;
		}
		else if(tong<k)
		{	
			tong+=a[j];
			j++;
		}
	}
	if(ok==1)
	{
		for(int z=i;z<j;z++)
		{
			cout<<a[z];
			if(z!=j-1) cout<<" ";
			else cout<<"\n";
		}
	}
	else 
	{
		cout<<"NOT FOUND"<<"\n";
	}
}
int main()
{
	Faster();
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		solve();
	}
}
