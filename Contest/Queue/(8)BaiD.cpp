#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n,k;cin>>n>>k;
	long long a[n+5];
	for(int i=1;i<=n;i++) cin>>a[i];
	long long f[n+5]={};
	deque <int> dq;
	dq.push_back(1);
	f[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		while(!dq.empty() && dq.front() < (i-k)) dq.pop_front();
		long long tmp= f[dq.front()];
		long long tong= tmp + a[i];
		while(!dq.empty() && tong >= f[dq.back()])	dq.pop_back();
		f[i]=tong;
		dq.push_back(i);
	}
	cout<<f[n]<<"\n";
}
int main()
{
	Faster();
	int t;cin>>t;
	while(t--)
		Solve();
	return 0;
}