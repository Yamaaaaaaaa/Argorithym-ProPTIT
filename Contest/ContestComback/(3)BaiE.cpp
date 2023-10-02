#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n+5];
    int dem=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]) b[dem++]=a[i];
    }
    if(k>dem) cout<<"-1";
    else cout<<b[k-1];
    return 0;
}