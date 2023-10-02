#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    int a[n+5];
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pq.push(a[i]);
    }
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        mp[pq.top()]=i;
        pq.pop();
    }
    for(int i=1;i<=n;i++)
    {
        cout<<mp[a[i]]-1;
        if(i!=n) cout<<" ";
    }
    return;
}
int main()
{
	Faster();
	Solve();
	return 0;
}