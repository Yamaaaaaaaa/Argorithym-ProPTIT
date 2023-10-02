#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

// void Solve()
// {
//     int n,r,c; cin>>n>>r>>c;
//     int a[n+5][n+5];
//     for(int i=0;i<=n+4;i++)
//     {
//         for(int j=0;j<n+4;j++)
//         {
//             a[i][j]=0;
//         }
//     }
//     a[r][c]=1;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(a[i][j]==1)
//             {
//                 a[i+1][j-1]=1;
//                 a[i+1][j]=1;
//                 a[i+1][j+1]=1;
//             }
//         }
//     }
//     int dem=0;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(a[i][j]==1)
//             {
//                 dem++;
//             }
//         }
//     }
//     cout<<dem;
//     return;
//}

void Solve()
{
    int n,r,c;cin>>n>>r>>c;
    int chieucao=(n-r+1);

    int res=chieucao*chieucao;

    if(c<(n-r+1)) 
    {
        int cc1=(n-r+1)-c;
        int s1=(cc1+1)*cc1/2;
        res-=s1;
      //  cout<<s1<<" ";
    }
    if(c>(n-(n-r+1)))
    {
        int cc2=(n-r)-(n-c);
        int s2=(cc2+1)*cc2/2;
        res-=s2;
      //  cout<<s2<<" ";
    }

    cout<<res;
    return;
}
int main()
{
    Faster();
    Solve();
    return 0;
}
