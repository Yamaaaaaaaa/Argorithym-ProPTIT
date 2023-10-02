//Faster()
#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve(int n,int k,int s)
{
    int t=0;
    int a[10000]={};
    for(int i=1;i<=k;i++)
    {
        t+=i;
        a[i]=i;
    }
    int dem=0;
    if(t==s) 
    {
        dem++;
    }
    int check=0;
    while(check!=1)
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
        if(check==1) break;
        int tong=0;
        for(int i=1;i<=k;i++)
        {
            tong+=a[i];
        }
        if(tong==s) 
        {
            dem++;
        } 
    }
    cout<<dem<<"\n";
    return;
}
int main()
{
	Faster();
    while(1)
    {
        int n,k,s;
        cin>>n>>k>>s;
        if(n==k&&n==s&&s==0) break;
        else Solve(n,k,s);
    }
	return 0;
}