#include <bits/stdc++.h>
using namespace std;
long long snt[1050000];
long long luu[1050000];
long long dem=0;
void sang()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<sqrt(1050000);i++)
    {
        if(snt[i]==0)
        {
            for(int j=i*i;j<1050000;j+=i)
            {
                snt[j]=1;
            }
        }
    }

    for(int i=2;i<=1050000;i++)
    {
        if(snt[i]==0) luu[dem++]=i;
    }
}
int main()
{
    sang();
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<dem;i++)
        {
            if(luu[i]<n)
            {
                if(luu[i+1]>=n) cout<<luu[i];
                else cout<<luu[i]<<" ";
            }
            else break;
        }
        cout<<"\n";
    }
    return 0;
}