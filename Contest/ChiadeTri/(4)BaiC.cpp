#include <bits/stdc++.h>
#define C 1000000007
using namespace std;
long long fibo[100];
void f()
{
	fibo[1]=1;
    fibo[2]=1;
    for(int i=3;i<=93;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}
void Solve()
{
    long long n,k;cin>>n>>k;
    
    while(1)
    {
        if(n<=2)
        {
            if(n==1) cout<<"A"<<"\n";
            if(n==2) cout<<"B"<<"\n";
            break;
        }
        else 
        {
            if(k<=fibo[n-2])
            {
                n-=2;
            }
            else
            {
                k-=fibo[n-2];
                n--;
            } 
        } 
    }
    return;
}
int main()
{
    f();
    int t;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}
