#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	long long n,k;cin>>n>>k;
    long long cnt=n/k;
    if(cnt%2==0) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}