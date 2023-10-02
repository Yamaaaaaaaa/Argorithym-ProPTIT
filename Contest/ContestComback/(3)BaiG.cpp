#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    long long best=a[1];
    long long sum=a[1];
    int dmin=0,cmin=0;
    int tong=0;
    int d=1,c=1;
    for(int i=2;i<=n;i++)
    {
        int tmp=sum+a[i];
        if(a[i]>tmp) //neu = thi uu tien de cai cũ vì lấy d+c min
        {
            sum=a[i];
            d=i;c=i;
            if(best<sum)
            {
                best=sum;
                dmin=d;cmin=c;
            }
            else if(best==sum)
            {
                if(d+c<dmin+cmin)
                {
                    dmin=d;
                    cmin=c;
                }
            }
        }
        else
        {
            sum=tmp;
            c=i;
            if(best<sum)
            {
                best=sum;
                dmin=d;cmin=c;
            }
            else if(best==sum)
            {
                if(d+c<dmin+cmin)
                {
                    dmin=d;
                    cmin=c;
                }
            }
        }
    }
    cout<<dmin<<" "<<cmin<<" "<<best;
    return 0;
}
