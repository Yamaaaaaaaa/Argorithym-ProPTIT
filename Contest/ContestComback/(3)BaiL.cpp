#include <bits/stdc++.h>
using namespace std;
void Solve()
{
    int n,k;
    cin>>n>>k;
    int a[k+50];
    int b[k+50];
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int ok=0;
    for(int i=k;i>=1;i--)
    {
        if(b[i]<(n-k+i)) //chua max
        {
            ok=1;
            b[i]+=1;
            for(int j=i+1;j<=k;j++)
            {
                b[j]=b[j-1]+1;
            }
            break;
        }
    }
    if(ok==0) cout<<k<<"\n";
    else
    {
        map<int,int>mp;
        int dem=0;
        for(int i=1;i<=k;i++)
        {
            mp[b[i]]++;
        }
        for(int i=1;i<=k;i++)
        {
            if(mp[a[i]]==0)
            {
                dem++;
            }
        }
        cout<<dem<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
}