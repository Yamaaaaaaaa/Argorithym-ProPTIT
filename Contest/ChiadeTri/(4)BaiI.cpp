#include <bits/stdc++.h>
#define C 1000000007
#define ll long long
using namespace std;

//Vd:2^2*3*2*5*3 ==> mỗi cái 2^1,2*2 nhân với : tích của (số mũ các thk còn lại +1)  
//==>>>( 2^(1+2) ) ^ ((2+1)*(3+1))
ll chiadetri(ll n,ll a)
{
    if(n==0) return 1;
    if(n==1) return a;
    if(n%2==1)
    {
        return (a*chiadetri(n-1,a)%C)%C;
    }
    else return (chiadetri(n/2,a)*chiadetri(n/2,a))%C;
}
int main()
{
    ll m; cin>>m;
    ll a[500000];
    ll xh[500000];//Tong mu xh cua a[i]
    ll n=0;
    map<ll,ll>mp;
    ll tongmu=1;
    for(ll i=1;i<=m;i++)
    {
        ll x;cin>>x;
        if(mp[x]==0) a[n++]=x;
        mp[x]++;
    }
    ll res=1;

    for(ll i=0;i<n;i++)
    {
         tongmu*=(mp[a[i]]+1);
         xh[i]=(mp[a[i]]+1)*mp[a[i]]/2;//tong cac thua so a[i]^1  ->a[i]^mp[a[i]]
    }
    for(ll i=0;i<n;i++)
    {
        xh[i]*=(tongmu/(mp[a[i]]+1));
        ll tmp=chiadetri(xh[i],a[i]);//So lan  Xh cua xh[i] trong cac uoc khac
        res=(res*tmp)%C;
    }
    cout<<res;
    return 0;
}