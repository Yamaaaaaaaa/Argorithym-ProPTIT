#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int sinhch(int a[],int n)
{
    int ok=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==1) a[i]=0;
        else
        {
            ok=1;
            a[i]=1;
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
        int n,check=0;
        int a[10000];
        cin>>n;
        for(int i=1;i<=n;i++)   a[i]=0;
        while(check!=1)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==0) cout<<'A';
                else cout<<'B';
            }
            check=sinhch(a,n);
            if(check!=1) cout<<" ";
        }
        cout<<"\n";
    }
	return 0;
}