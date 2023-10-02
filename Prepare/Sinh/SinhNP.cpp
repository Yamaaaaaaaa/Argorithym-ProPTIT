#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n,check=0,a[1000];
void taochdau()
{
    for(int i=1;i<=n;i++)   a[i]=0;
}
void sinhch()
{
    int ok=0;
    for(int i=n;i>=1;i--)
    {
        if(a[i]==1) a[i]=0;
        else
        {
            ok=1;
            a[i]=1;
            break;
        } 
    }
    if(ok==0) check=1;
}
int main()
{
	Faster();
    cin>>n;
    taochdau();
    while(check!=1)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
        sinhch();
    }
    
	return 0;
}