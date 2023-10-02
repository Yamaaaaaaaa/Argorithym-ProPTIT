#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define C 1000000007
using namespace std;
//su dung luy thua ma tran

// [fn+1 fn  ]
// [fn   fn-1]


struct matran{
    long long f[5][5];
};
matran nhanMT(matran a,matran b)
{
    matran res;
    res.f[0][0]=(a.f[0][0]*b.f[0][0]+a.f[0][1]*b.f[1][0])%C;
    res.f[0][1]=(a.f[0][0]*b.f[0][1]+a.f[0][1]*b.f[1][1])%C;
    res.f[1][0]=(a.f[1][0]*b.f[0][0]+a.f[1][1]*b.f[1][0])%C;
    res.f[1][1]=(a.f[1][0]*b.f[0][1]+a.f[1][1]*b.f[1][1])%C;
    return res;
}
matran luythua(matran a,int n)
{
    matran MTDV;
    MTDV.f[0][0]=1;MTDV.f[1][1]=1;MTDV.f[1][0]=0;MTDV.f[0][1]=0;
    if(n==0) return MTDV;
    matran b=luythua(a,n/2);
    if(n%2==1) return nhanMT(nhanMT(b,b),a);//phải xài tối giản nhất nếu koTLE đó
    else return nhanMT(b,b);
}
void Solve()
{
    int n;cin>>n;
    matran bd;
    bd.f[0][0]=1;bd.f[1][1]=0;bd.f[1][0]=1;bd.f[0][1]=1;
    matran res;
    res=luythua(bd,n);
    cout<<res.f[0][1]<<"\n";
    return;
}
int main()
{
	Faster();
	int t;cin>>t;
	while(t--) Solve();
	return 0;
} 