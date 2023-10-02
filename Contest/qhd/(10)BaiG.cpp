#include<bits/stdc++.h>
using namespace std;
struct hcn{
    int d,r;
    long long c;
};
int cmp1(hcn x,hcn y)
{
    if(x.d < y.d) return true;
    else if(x.d==y.d)
    {
        if(x.r < y.r) return true;
    }
    return false;
}
int cmp2(hcn x,hcn y)
{
    if(x.r < y.r) return true;
    else if(x.r==y.r)
    {
        if(x.d < y.d) return true;
    }
    return false;
}
int main()
{
    int n;cin>>n;
    hcn h[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>h[i].r>>h[i].d>>h[i].c;
    }
    h[0].r=h[0].d=h[0].c=0;
    long long res=0;
    long long cc1[n+5]={};
    sort(h+1,h+1+n,cmp1);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(h[i].r > h[j].r && h[i].d > h[j].d)
            {
                cc1[i]=max(cc1[i],cc1[j]+h[i].c);
            }
        }
        res=max(cc1[i],res);
    }

    sort(h+1,h+1+n,cmp2);
    long long cc2[n+5]={};

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(h[i].d > h[j].d && h[i].r > h[j].r)
            {
                cc2[i]=max(cc2[i],cc2[j]+h[i].c);
            }
        }
        res=max(cc2[i],res);
    }
    cout<<res;
    return 0;
}