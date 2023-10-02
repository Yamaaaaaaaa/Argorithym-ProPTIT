#include <bits/stdc++.h>
using namespace std;
int sinhch(int a[],int n)
{
    int ok=0;
    for(int i=n;i>=1;i--)
    {
        if(a[i]<n)
        {
            ok=1;
            a[i]++;
            for(int j=i+1;j<=n;j++) a[j]=1;
            break;
        }
    }
    if(ok==0) return 1;
    return 0;
}
int main()
{
    int n;cin>>n;
    int a[1000];
    int b[1000];
    for(int i=1;i<=n;i++)
    {
        a[i]=i;b[i]=1;
    }
    int c1=1;
    while(c1)
    {
        int c2=0;
        while(c2!=1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<(char)(a[i]+64);
            }
            for(int i=1;i<=n;i++)
            {
                cout<<b[i];
            }
            cout<<"\n";
            c2=sinhch(b,n);
        }
        for(int i=1;i<=n;i++)
        {
            b[i]=1;
        }
        c1=next_permutation(a+1,a+1+n);
    }
    return 0;
}