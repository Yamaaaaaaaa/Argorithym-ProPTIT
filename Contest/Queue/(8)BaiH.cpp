//1 2 3 4 5 6
//4 1 3 5 2 6

// 0 1 2     3 0 2  0 4 1  
// 3 4 5     4 1 5  3 5 2
// 11 12 13  21 11 13   11 22 12
// 21 22 23  22 12 23   21 23 12

#include<bits/stdc++.h>
using namespace std;
int to_int(string tmp)
{
    int res=0;
    for(int i=0;i<6;i++)
    {
        res*=10;res+=((int)tmp[i]-48);
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s1="",s2="";
        for(int i=1;i<=6;i++) 
        {
            char k;cin>>k;s1=s1+k;
        }
        for(int i=1;i<=6;i++) 
        {
            char k;cin>>k;s2=s2+k;
        }
        queue<pair<string,int>> q;
        map<int,int> mp;
        if(s1==s2)
        {
            cout<<"0\n";
            continue;
        }
        pair<string,int> p;
        p.first=s1;p.second=0;
        q.push(p);
        while(!q.empty())
        {
            string tmp=q.front().first; int step=q.front().second; q.pop();
            if(tmp==s2) 
            {
                cout<<step;
                break;
            }
            string x1="";
            x1=x1+tmp[3]+tmp[0]+tmp[2]+tmp[4]+tmp[1]+tmp[5];
            string x2="";
            x2=x2+tmp[0]+tmp[4]+tmp[1]+tmp[3]+tmp[5]+tmp[2];
            //cerr<<x1<<" "<<x2<<"\n";
            
            if(mp[to_int(x1)]==0) 
            {
                q.push({x1, step+1});
                mp[to_int(x1)]++;
            }
            if(mp[to_int(x2)]==0) 
            {
                q.push({x2,step+1});
                mp[to_int(x2)]++;
            }
        }
        cout<<"\n";
    }
}