#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int n,s,a[1000];
vector<vector<int>>res;
void Try(int sum,vector<int>bd,int i)
{
    if(i>n) return;
    if(sum==s)
    {
        res.push_back(bd);
        return;
    }
    for(int j=i;j<=n;j++)///////////
    {
        if(sum+a[j]<=s)
        {
            bd.push_back(a[j]);
            Try(sum+a[j],bd,j); //cong vao day để đỡ phải huy cong nhan
            bd.pop_back();        
        }
    }
    return;
}
void Solve()
{
	res.clear();
    cin>>n>>s;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    vector<int> bd;
    Try(0,bd,1);
    if(res.size()==0) cout<<"-1";
    else
    {
        cout<<res.size()<<" ";
        for(int i=0;i<res.size();i++)
        {
            cout<<"{";
            for(int j=0;j<res[i].size();j++)
            {
                cout<<res[i][j];
                if(j!=res[i].size()-1) cout<<" ";
            }
            cout<<"}";
            if(i!=res.size()-1) cout<<" ";
        }
    }
    cout<<"\n";
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}