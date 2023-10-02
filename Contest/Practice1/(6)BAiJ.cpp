#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    int a[n+5];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];mp[a[i]]++;
    }
    int maxx=0;
    for(int i=1;i<=n;i++)
    {
        maxx=max(maxx,mp[a[i]]);
    }
    for(int i=1;i<=n;i++)
    {
        if(mp[a[i]]==maxx)
        {
            cout<<a[i]<<"\n";
            break;
        }
    }
}

int main()
{
	Faster();
	Solve();
	return 0;
}