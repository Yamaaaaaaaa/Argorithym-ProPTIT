#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL) ;cout.tie(NULL);
using namespace std;
int main()
{
    Faster();
    int n,k;
    cin>>n>>k;
    int a[n+5][n+5];
    int b[n+5];
    for(int i=1;i<=n;i++)
    {
        b[i]=i;
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int dem=0;
    do{
        int tong=0;
        for(int i=1;i<=n;i++)
        {
            tong+=a[i][b[i]];
        }
        if(tong==k)
        {
            dem++;
        }
    }while(next_permutation(b+1,b+1+n));
    cout<<dem<<"\n";
    do{
        int tong=0;
        for(int i=1;i<=n;i++)
        {
            tong+=a[i][b[i]];
        }
        if(tong==k)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<b[i];
                if(i!=n) cout<<" ";
                else cout<<"\n";
            }
        }
    }while(next_permutation(b+1,b+1+n));
    return 0;
}