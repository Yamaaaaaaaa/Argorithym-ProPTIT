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
    if(ok==0) return 0;
    else return 1;
}
int main()
{
	Faster();
    int t; cin>>t;
    while(t--)
    {
        int n,k,check=0,a[2000];
        cin>>n>>k;
        for(int i=1;i<=k;i++)  cin>>a[i];
        int x=sinhch(a,n,k);
        if(x==1)
        {
            for(int i=1;i<=k;i++) 
            {
                cout<<a[i];
                if(i!=k) cout<<" ";
            }
        }
        else
        {
            for(int i=1;i<=k;i++) 
            {
                cout<<i;
                if(i!=k) cout<<" ";
            }
        }
        cout<<"\n";
    }

	return 0;
}