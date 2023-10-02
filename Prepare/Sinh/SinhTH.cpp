#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n,k,check=0,a[1000];
void taochdau()
{
    for(int i=1;i<=k;i++)   a[i]=i;
}
void sinhch()
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
    if(ok==0) check=1;
}
int main()
{
	Faster();
    cin>>n>>k;
    taochdau();
    while(check!=1)
    {
        for(int i=1;i<=k;i++)  cout<<a[i];
        cout<<"\n";
        sinhch();
    }
    
	return 0;
}