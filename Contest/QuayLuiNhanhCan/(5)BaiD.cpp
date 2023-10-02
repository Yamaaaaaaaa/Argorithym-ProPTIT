//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int k;
string s;
string res;
void Solve()
{
	cin>>k>>s;
    res=s;
    // Try(s,k,0);
    // cout<<res<<"\n";
    auto maxx=max_element(s.begin(),s.end());
    cout << s.begin()+maxx;
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}
