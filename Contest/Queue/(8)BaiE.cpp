#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n,k;cin>>n>>k;
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"0"; return;
    }
    sort(a+1,a+n+1);
    deque<int> q;
    long long res=0;
    int i=1;
    while(i<=n)
    {
        if(q.empty())
        {
            q.push_back(a[i]); i++;
        } 
        else 
        {
            if(a[i]-q.front()<k)
            {
                res+=q.size();
                q.push_back(a[i]); i++;
            }
            else q.pop_front();
        }
    }
    cout<<res;
}
int main()
{
	Faster();
	Solve();
	return 0;
}