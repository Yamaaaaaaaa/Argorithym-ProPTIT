#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;  long long x,y;  cin>>n>>x>>y;
    if(x>y) //cho x min luon
    {
        long long tmp=x; x=y; y=tmp;
    }
    //Phải có 1 bản trc đã để cho sang máy bên kia
    long long res=0;
    n-=1;
    res+=x;

    //a+b=n; a*x=b*y;
    long long b=(n*x)/(x+y);
    long long a=n-b;
    long long t=min(a*x,b*y);
    a=t/x;
    b=t/y;
    //Chon a,b như trên thay vì a=1,b=0 thì sẽ ko bị TLE;

    while(1)
    {
        if(a+b>=n)
        {
            if((a*x)/y+a>n) res+=(b*y);
            else res+=(a*x); 
            break;
        }
        if(a+b<n)
        {
            if((a*x+x)/y>b) 
            {
                a++;b++;
            }
            else a++;
        }
    }
    cout<<res;
    return 0;
}