#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    Faster();
    int n;cin>>n;
    int a[n+1000]={};
    int m,k;cin>>m>>k;
    for(int i=1;i<=m;i++)
    {
        int p;cin>>p;
        if(p-k>=0) a[p-k]+=1;
        else a[0]+=1;
        a[p+k+1]-=1;
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
        // if(a[i]>0) a[i]=1;
        // else a[i]=0;

       // cout<<a[i]<<" ";
    }
    int dem=0;
    
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=0) 
        {
            for(int j=i;j<=i+k+k;j++)
            {
                a[j]+=1;
            }
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
