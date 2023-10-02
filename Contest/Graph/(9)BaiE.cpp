#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
string b,e;
int visited[9][9];
int dx,dy,cx,cy;
int res;
int n[10]={1,2,2,1,-1,-2,-2,-1};
int d[10]={-2,-1,1,2,2,1,-1,-2};
void Try(int i,int j,int cnt)
{
    if(cnt>res||cnt>=30) return;
    if(i==cx && j==cy)
    {
        res=min(res,cnt);
        return;
    }
    for(int k=0;k<8;k++)
    {
        if(i+n[k]<=8 && j+d[k] <=8 && i+n[k]>=1 && j+d[k]>=1 && visited[i+n[k]][j+d[k]]==0)
        {
            visited[i+n[k]][j+d[k]]=1;
            Try(i+n[k],j+d[k],cnt+1);
            visited[i+n[k]][j+d[k]]=0;
        }
    }
    return;
}

int main()
{
    Faster();
    int t;  cin>>t;
    while(t--)
    {
        cin>>b>>e;
        dx=((int)b[0]-96),dy=((int)b[1]-48);
        cx=((int)e[0]-96),cy=((int)e[1]-48);
        memset(visited,0,sizeof(visited));
        res=100;
        Try(dx,dy,0);
        cout<<res<<"\n";
    }
    return 0;
}