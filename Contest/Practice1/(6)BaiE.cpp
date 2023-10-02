#include <bits/stdc++.h>
using namespace std;

long long luythua[10000];
void luult()
{
    luythua[0]=1;
    for(int i=1;i<=60;i++) luythua[i]=luythua[i-1]*2;
}
void Solve()
{
    long long k;
    long long n=59;
	cin>>k;
    while(1)
    {
        if(k==luythua[n])
        {
            cout<<n+1;
            break;
        }
        else if(k<luythua[n])
        {
            n--;
        }
        else if(k>luythua[n])
        {
            k-=luythua[n];
            n--;
        }
    }
    return;
}
int main()
{
    luult();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        Solve();
        if(i!=t) cout<<" ";
    }
    return 0;
}