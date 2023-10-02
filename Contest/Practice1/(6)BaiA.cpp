//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int a[150000],n,q,x,k;
int cmp(int u,int v)
{
    if(abs(u-x)<abs(v-x)) return true;
    return false;
}
int main()
{
	Faster();
	cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int l=1;l<=q;l++)
    {
        cin>>x>>k;
        sort(a,a+n,cmp);
        for(int i=0;i<k;i++) 
        {
            cout<<a[i];
            if(i!=k-1) cout<<" ";
        }
        cout<<"\n";
    }
	return 0;
}