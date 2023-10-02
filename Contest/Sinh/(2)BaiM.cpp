#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int sinhch(int b[],int n)
{
    int ok=0;
    for(int i=n;i>=1;i--)
    {
        if(b[i]==1) b[i]=0;
        else 
        {
            ok=1;
            b[i]=1;
            break;
        }
    }
    if(ok==0) return 1;
    return 0;
}
int main()
{
    int n;
    int b[1000];
    int a[1000];
	Faster();
    cin>>n;
    for(int i=1;i<=n;i++)  
    {
        cin>>a[i];
        b[i]=0;
    }
    b[n]=1;
    if(n==1)
    {
        cout<<a[1];
        return 0;
    }
    int res=1e9;
    int check=0;
    while(check!=1)
    {
        int tong1=0;
        int tong2=0;
        for(int i=1;i<=n;i++)
        {
         //   cout<<b[i];
            if(b[i]==1) tong1+=a[i];
            else tong2+=a[i];
        }
       // cout<<"\n";
        res=min(abs(tong1-tong2),res);
        check=sinhch(b,n);
    }
    cout<<res;
	return 0;
}

