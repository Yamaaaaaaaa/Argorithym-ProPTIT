#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

// int sinhch(int a[],int n)
// {
//     int ok=0;
//     for(int i=n-1;i>=1;i--){
//         if(a[i]<a[i+1]){
//             ok=1;
//             int minn=100,idm=n;
//             for(int j=i+1;j<=n;j++){
//                 if(a[j]>a[i]){
//                     if(a[j]<minn){
//                         minn=a[j];
//                         idm=j;
//                     }
//                 }
//             }
//             swap(a[i],a[idm]);
//             sort(a+i+1,a+n+1);
//             break;
//         }
//     }
//     if(ok==0) return 0;
//     return 1;
// }
int main()
{
	Faster();
    int t; cin>>t;
    while(t--)
    {
        int n,a[10000];
        cin>>n;
        for(int i=1;i<=n;i++)  cin>>a[i];

        int x=next_permutation(a+1,a+1+n);
        if(x==1)
        {
            for(int i=1;i<=n;i++) 
            {
                cout<<a[i];
                if(i!=n) cout<<" ";
            }
        }
        else
        {
            for(int i=1;i<=n;i++) 
            {
                cout<<i;
                if(i!=n) cout<<" ";
            }
        }
        cout<<"\n";
    }

	return 0;
}