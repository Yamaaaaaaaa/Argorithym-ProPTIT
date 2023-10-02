#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m+5],b[n+5];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int res[500000]={};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i+j]+=a[i]*b[j];
            }
        }
        for(int i=0;i<m+n-1;i++)
        {
            cout<<res[i];
            if(i!=m+n-2) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}