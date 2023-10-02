#include <bits/stdc++.h>
using namespace std;
int uoc(int n)
{
    for(int i=sqrt(n);i>=1;i--)
    {
        if(n%i==0) return n/i;
    }
    return n;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        queue<pair<int,int>> q;
        map<int,int> mp;
        q.push({n,0});
        mp[n]=1;
        while(1)
        {
            int tmp=q.front().first,  step=q.front().second;  q.pop();
            cerr<<tmp<<" ";
            if(tmp==1) 
            {
                cout<<step<<"\n";
                break;
            }
            else
            {
                if(mp[tmp-1]==0)
                {
                    q.push({tmp-1,step+1});
                    mp[tmp-1]++;
                }
                for(int i=sqrt(tmp);i>=2;i--)
                {
                    if(tmp%i==0)
                    {
                        if(mp[tmp/i]==0)
                        {
                            q.push({tmp/i,step+1});
                            mp[tmp/i]++;
                        } 
                    }
                }
            }
        }
    }
}