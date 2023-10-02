#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

void Solve()
{
    int n;cin>>n;
    long long a[n+5];
    long long best=0;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        a[i]=abs(a[i])+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum=max((sum+a[i]),a[i]);
        best=max(best,sum);
    }
    cout<<best<<"\n";
    return;
}
int main()
{
    Faster();
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}
