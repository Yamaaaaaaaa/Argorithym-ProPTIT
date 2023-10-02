//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    int a[n+5];
    vector<int>vec;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        vec.push_back(a[i]);
    }
    while(vec.size()>1)
    {
        cout<<"[";
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i];
            if(i!=vec.size()-1) cout<<" ";
        }
        cout<<"]";
        vector<int>tmp;
        for(int i=0;i<vec.size()-1;i++)
        {
            tmp.push_back(vec[i]+vec[i+1]);
        }
        vec.clear();
        for(int i=0;i<tmp.size();i++)
        {
            vec.push_back(tmp[i]);
        }
        cout<<"\n";
    }
    cout<<'['<<vec[0]<<"]"<<"\n";
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}
