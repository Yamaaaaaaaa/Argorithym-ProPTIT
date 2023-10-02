#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
string s;
int n,check=0,a[1000];
void taochdau()
{
    for(int i=0;i<s.length();i++)   a[i+1]=(int)s[i]-48;
    n=s.length();
    sort(a+1,a+n+1);
}
void sinhch()
{
    int ok=0;
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]<a[i+1])
        {
            ok=1;
            int minn=100,idm=n;
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]>a[i])
                {
                    if(a[j]<minn)
                    {
                        minn=a[j];
                        idm=j;
                    }
                }
            }
            swap(a[i],a[idm]);
            sort(a+i+1,a+n+1);
            break;
        }
    }
    if(ok==0) check=1;
}
int main()
{
	Faster();
    cin>>s;
    taochdau();
    while(check!=1)
    {
        for(int i=1;i<=n;i++)  cout<<a[i];
        cout<<"\n";
        sinhch();
    }
	return 0;
}