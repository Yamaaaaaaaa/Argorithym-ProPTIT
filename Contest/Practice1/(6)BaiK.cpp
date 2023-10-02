#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n,k;cin>>n>>k;
    int a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    long long dem=0;
    sort(a+1,a+n+1);
    int i=n-1,j=n;
    while(i>0&&j>0)
    {
       // cerr<<i<<" "<<j<<" "<<dem<<"\n";
        
        if(a[j]-a[i]>=k) 
        {
            dem+=(j-i-1);
            j--;
        }
        else i--;
    }
    if(j>0) dem+=((long long)(j-1)*j/2);
    cout<<dem;
}
int main()
{
	Faster();
	Solve();
	return 0;
}
