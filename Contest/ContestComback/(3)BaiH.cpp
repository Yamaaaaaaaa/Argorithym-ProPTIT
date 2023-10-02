#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    if(k>=2*n) cout<<"0";
    if(k==1||k==2) cout<<"0";//Test 73
    else if(k<2*n&&k>n)
    {
        int d=k-n;
        int g=n-d;
        if(g%2==0) cout<<g/2;
        else cout<<g/2+1;
    }
    else if(k<=n)
    {
        int d=k-1;
        int g=d-1;
        if(g%2==0) cout<<g/2;
        else cout<<g/2+1;
    }
    return 0;
}