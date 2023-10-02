#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
    int m,n;
    cin>>m>>n;
    long long a[m+5][n+5];
    for(int i=0;i<=m+4;i++)
    {
        for(int j=0;j<=n+4;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    long long res=(long long)m*n; //day tren

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==0) res-=1;
            else
            {
                if(a[i][j]>a[i-1][j]) res+=(a[i][j]-a[i-1][j]); 
                if(a[i][j]>a[i+1][j]) res+=(a[i][j]-a[i+1][j]); 
                if(a[i][j]>a[i][j-1]) res+=(a[i][j]-a[i][j-1]); 
                if(a[i][j]>a[i][j+1]) res+=(a[i][j]-a[i][j+1]); 
            }
        }
            
    }
    cout<<res<<"\n";
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