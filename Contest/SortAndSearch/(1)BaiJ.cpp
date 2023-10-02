//Faster()
#include <iostream>
#include <bits/stdc++.h>
//#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
double a[1000500];
int n,k;
void Solve()
{
	cin>>n>>k;
    double sum=0,res=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    double l=0,r=1000;
    while(l<=r)
    {
        double mid=(l+r)/2;
        double cnt=0;//that thoat
        for(int i=1;i<=n;i++) if(a[i]>mid) cnt+=(a[i]-mid)*k/100; 
        double du=sum-cnt-(n*mid);
        if(abs(du)<=0.0000001)
        {
            res=mid;
            break;
        }
        else if(du>0.0000001)
        {
            l=mid;//xet tu mid->r
        }
        else r=mid;//xet tu l->mid
    }
    printf("%.6lf",res);
}
int main()
{
	//Faster();
	Solve();
	return 0;
}