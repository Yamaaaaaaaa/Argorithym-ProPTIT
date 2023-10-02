#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void Solve()
{
    long long ugly[10050]={};
    ugly[0]=1;
    int i2=0,i3=0,i5=0;
    for(int i=1;i<=10020;i++)
    {
        long long next=min( ugly[i2]*2 , min( ugly[i3]*3,ugly[i5]*5 ) ); //min cua:  so moi dc nhan voi*2 
                                                                       //so mois dc nhan voi 3
                                                                       //so moi dc nhan voi 5
        //quan trong ko o i2,i3,i5 mà ở n lần lặp,ta liên tục cập nhật ugly[i2],i3,i5 bằng cách nhân với 2,3,5
        ugly[i]=next;
        if(next == ugly[i2]*2 ) i2++;
        if(next == ugly[i3]*3 ) i3++;
        if(next == ugly[i5]*5 ) i5++;
    }
    int t;cin>>t;
    while(t--) 
    {
        int n;cin>>n;
        cout<<ugly[n-1]<<"\n";
    }
    return;  
}
int main()
{
    Faster();
    Solve();
    return 0;
}