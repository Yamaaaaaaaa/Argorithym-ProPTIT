#include <bits/stdc++.h>
#define C 1000000007
using namespace std;
void Solve()
{
    int n,k;cin>>n>>k;
    long long a[n+5]={};
    pair<long long,int> p; //tong hien tai cua cửa số tượt, số phần tử trong cs tượt.
    //luc dau o buoc 0
    a[0]=1;a[1]=1;
    if(k==1) 
    {
        p.first=1;
        p.second=1;
    }
    else 
    {
        p.first=2;
        p.second=2;
    }
    for(int i=2;i<=n;i++)
    {   
        a[i]+=p.first;
        a[i]%=C;
        if(p.second==k)
        { 
            p.first=p.first-a[i-k]+a[i];  //p.first ko cần %c vì nó chỉ là tổng các a[i] ĐÃ ĐC %C RỒI
        }
        else 
        {
            p.second++;
            p.first+=(a[i]);
        }
     //   cout<<a[i]<<" ";
    }
    cout<<a[n]<<"\n";
}
int main()
{
    int t;cin>>t;
    while(t--)  Solve();
}