#include <bits/stdc++.h>
#define C 1000000007
using namespace std;
long long luythua(long long a,long long n)
{
    if(n==0) return 1;
    if(n==1) return a;
    if(n%2==1)
    {
        return a*luythua(a,n-1);
    }
    else return luythua(a,n/2)*luythua(a,n/2);
}
void Solve()
{
	long long n;long long k;cin>>n>>k;
    while(1)
    {
        if(k==luythua(2,n))
        {
            cout<<n+1<<"\n";
            break;
        }
        else if(k<luythua(2,n))
        {
            n--;
        }
        else if(k>luythua(2,n))
        {
            k-=luythua(2,n);
            n--;
        }
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}
