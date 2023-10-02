#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Faster();
    /* Rồng có DEF :X => SM 1 chiến binh >=X
               ATK :Y => Tổng SM các chiến binh còn lại >=Y 
    */

    int n;cin>>n;
    long long a[n+5];
    long long tong=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        tong+=a[i];
    }
    sort(a,a+n);

    long long a_thieu1[n+5];
    for(int i=0;i<n;i++)
    {
        a_thieu1[i]=tong-a[i];
    }
    sort(a_thieu1,a_thieu1+n);

    int m;cin>>m;
    while(m--)
    {
        long long def,atk;cin>> def >>atk;
        //TH1:Chọn Ng công rồi mới chọn ng thủ
        long long res1=0;
        if( (lower_bound(a,a+n,def)-a) != n ) //tim dc ptu co sm >= def
        {
            long long tmp=tong-a[(lower_bound(a,a+n,def)-a)];
            if(tmp < atk) res1+=(atk-tmp);
        }
        else
        {
            long long tmp=tong-a[n-1];
            res1+=(def-a[n-1]);
            if(tmp < atk) res1+=(atk-tmp);
        }
        //TH2 : Chọn ng thủ rồi mới chọn ng công
        long long res2=0;
        if( (lower_bound(a_thieu1,a_thieu1+n,atk)-a_thieu1) != n ) //tim dc ptu co sm >= def
        {
            long long tmp=tong-a_thieu1[ (lower_bound(a_thieu1,a_thieu1+n,atk) - a_thieu1 ) ];
            if(tmp < def) res2+=(def-tmp);
        }
        else
        {
            long long tmp=tong-a_thieu1[n-1];
            res2+=(atk-a_thieu1[n-1]);
            if(tmp < def) res2+=(def-tmp);
        }

        cout<<min(res1,res2)<<"\n";
    }
    return 0;
}