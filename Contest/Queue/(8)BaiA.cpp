#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int k;cin>>k;
    string s;cin>>s;
    map<int,int> mp;
    for(int i=0;i<s.length();i++) mp[(int)s[i]]++;
    priority_queue<int,vector<int>> pq;
    for(auto x: mp)
    {
        pq.push(x.second);
    }
    if(k>=s.length())
    {
        cout<<"0"<<"\n";
        return;
    } 
    while(k--)
    {
        int tmp=pq.top();
        pq.pop();
        tmp--;
        if(tmp>0) pq.push(tmp);
    }
    long long res=0;
    while(!pq.empty())
    {
        res+=((long long)pq.top()*pq.top());
        pq.pop();
    }
    cout<<res<<"\n";
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}