#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    long long a[n+5]; 
    for(int i=1;i<=n;i++) cin>>a[i];
    a[n+1]=0; //nhỡ nó ko ấn nút cuối cùng thì sao,nên phải xét thêm 1 ô n+1 =0 nữa
    if(k==1)
    {
        long long z=0;
        for(int i=1;i<=n;i++)
        {
            z=z+a[i];
        }
        cout<<z<<" "<<n;
        return 0;
    }
    long long res[n+5];
    int cnt[n+5]={};
    memset(res,-1e9,sizeof(res));
    res[1]=0;

    if(a[1]>0) 
    {
        res[1]=a[1];
        cnt[1]=1;
    }
    else 
    {
        res[1]=0;cnt[1]=0;
    }

    for(int i=2;i<=n+1;i++)
    {
        int somax=-1e9;
        int cntmin=1e9;
        //nếu bước trc ko đi vào a[i] thì sao?
        for(int j=max(i-k,1) ; j<i;j++)
        {
            if(res[j]>somax) 
            {
                somax=res[j];
                cntmin=min(cnt[j],cntmin);
            }
        }
        res[i]=somax+a[i];
        cnt[i]=cntmin+1;
    }
    cout<<res[n+1]<<" "<<cnt[n+1];
    return 0;
}