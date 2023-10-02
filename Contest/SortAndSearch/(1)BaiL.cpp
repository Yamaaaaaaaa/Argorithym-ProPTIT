//Faster()
#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n,k; cin>>n>>k;
    int a[n+5],b[n+5]={};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long res=0;
    int dem=0;//so pt khac nhau trong day con
    int j=1;
    for(int i=1;i<=n;i++)
    {
        if(b[a[i]]==0) dem++;
        b[a[i]]++;


        //Vong nay de xet xem day co du k pt khac hay ko
        //Neu thua thi bo phan tu dau di den khi dem==k
        //Hay
        while(dem>k) 
        {
            if(b[a[j]]==1) dem--;
            b[a[j]]--;
            j++;             
        }
        if(dem<=k) res+=((long long)i-j+1);
    }
    cout<<res;
}
int main()
{
	Faster();
	Solve();
	return 0;
}