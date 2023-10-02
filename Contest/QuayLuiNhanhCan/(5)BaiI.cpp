#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int res=15;
void Try(int x,int cnt)
{
    //cerr<<x<<" "<<cnt<<"\n";
    if(cnt>16) return;
    if(x==0) 
    {
        res=min(res,cnt);
        return;
    }
    
    Try((x+1)%32768,cnt+1);
    Try((x*2)%32768,cnt+1);
    return;
}
int main()
{
	Faster();
	int n; cin>>n;
    for(int k=1;k<=n;k++)
    {
        res=15;
        int x;cin>>x;
        Try(x,0);
        cout<<res;
        if(k!=n) cout<<" ";
    }
	return 0;
}