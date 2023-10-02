#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{   
	int n;
    cin>>n;
    int a[n+5];
    int tang[n+5]={};
    int giam[n+5]={};
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    a[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[i-1])
        {
            tang[i]=tang[i-1]+1;
        }
        else tang[i]=1;
    }
    for(int i=n;i>=1;i--)
    {
        if(a[i]>a[i+1])
        {
            giam[i]=giam[i+1]+1;
        }
        else giam[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<tang[i]+giam[i]-1;
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