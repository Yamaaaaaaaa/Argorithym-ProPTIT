#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n,k;cin>>n>>k;
    
    long long luu[100];
    int dem=0;
    luu[0]=1;
    for(int i=1;i<=32;i++)   luu[i]=luu[i-1]*k;


    int t=0;
    while(n>0)
    {
        for(int i=0;i<=32;i++)
        {
            if(n>=luu[i]&&n<luu[i+1])
            {
                int chia=n/luu[i];
                n-=chia*luu[i];
                t+=chia;
                break;
            }
        }
    }
    if(t%2==0) cout<<"Hanako";
    else cout<<"Taro";
    return 0;
}
