#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int sinhch(int a[],int n,int k)
{
    int ok=0;
    for(int i=k;i>=1;i--)
    {
        if(a[i]<n-k+i)
        {
            ok=1;
            a[i]++;
            for(int j=i+1;j<=k;j++)  a[j]=a[j-1]+1;
            break;
        }
    }
    if(ok==0) return 1;
    return 0;
}
int main()
{
	Faster();
    int t;cin>>t;
    while(t--)
    {
        int n,k,check=0;
        int a[10000];
        cin>>n>>k;
        for(int i=1;i<=k;i++)   a[i]=i;
        while(check!=1)
        {
            for(int i=1;i<=k;i++)
            {
                cout<<a[i];
            }
            check=sinhch(a,n,k);
            if(check!=1) cout<<" ";
        }
        cout<<"\n";
    }
	return 0;
}