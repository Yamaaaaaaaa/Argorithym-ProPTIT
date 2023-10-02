#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define C 1000000007
using namespace std;

int main()
{
    Faster();
    int n;cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    int res[n+5];
    for(int i=1;i<=n;i++) res[i]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(a[i] > a[j]) 
            {
                res[i]=max(res[i],res[j]+1);
            }
        }
    }

    int maxx=res[max_element(res+1,res+1+n)-res];
    int cnt=maxx;
    vector<vector<int>> vec;
    vector<int> tmp;

    for(int i=n;i>=1;i--)
    {
        if(res[i]==cnt)
        {
            tmp.push_back(a[i]);  
            cnt--;
        }
        if(cnt==0)
        {
            vec.push_back(tmp);
            tmp.clear();
            cnt=maxx;
        }
    }
    cout<<maxx<<"\n";
    for(int j=vec[0].size()-1;j>=0;j--)
    {
        cout<<vec[0][j];
        if(j!=0) cout<<" ";
    }

    return 0;
}
