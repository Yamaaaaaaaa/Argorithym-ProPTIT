#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n+k+5][n+k+5];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i+k-1][j+k-1];
        }
    }

    
    int tong[n+k+5][n+k+5];
    memset(tong,0,sizeof(tong));
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            tong[i][j]=tong[i-1][j]+tong[i][j-1]-tong[i-1][j-1]+a[i-1][j-1]-a[i+k-1][j-1]-a[i-1][j+k-1]+a[i+k-1][j+k-1];
            if(i>=k && j>=k) res=max(tong[i][j],res);
         //   cout<<tong[i][j]<<" ";
        }
    }
    
    cout<<res;
    return 0;
}