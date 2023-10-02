//1. TÌm đg đi ngắn nhất -> Xét xem có bao nhiêu con đg phải sửa -> Xét xem có bao nhiêu con đg cần cho nổ (nó liên thông là cho nổ)
#include <bits/stdc++.h>
using namespace std;
int v,e;
vector < pair<int,int> > dinhke[2000];
int tongdg[2000];
int visited[2000];
int res=1e9;
void nhap()
{
    cin>>v>>e;
    for(int i=1;i<=v;i++)
    {
        dinhke[i].clear();
    }
    memset(tongdg,0,sizeof(tongdg));
    for(int i=1;i<=e;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        dinhke[x].push_back({y,z});
        dinhke[y].push_back({x,z});
        tongdg[i]+=z;
    }
    res=1e9;
    memset(visited,0,sizeof(visited));
}

void dfs(int u,int cnt,int tongdg[]) //cnt là số tp bị ảnh hưởng
{
    cerr<<u<<" "<<cnt<<"\n";
    visited[u]=1;
    if(cnt>res) return;
    if(u==v) 
    {
        res=min(res,cnt);
    }
    for(auto x: dinhke[u]) //Di đg cần đi,phá những đg còn lại(nếu có). => 
    {   
        if(visited[x.first]==0)
        {
            if(x.second==0)
            {
                dfs(x.first,cnt+1+tongdg[x.first]); //saiiiiii
            }
            else 
            {
                dfs(x.first,cnt+tongdg[x.first]);
            }
        }
    }
    return;
}
int main()
{

    nhap();
    dfs(1,0);
    cout<<res;
    cout<<"\n";
    return 0;
}
//X: số cạnh tôt trên đg đị min
//Y: số cạnh tốt trên 
//D số cạnh của đg đi min
//Số đg cần sửa = D-X
//Số đg cần phá = Y-X.
//
//=? Đg đi ngắn nhất,tổng trọng số nho nhất có thể.
//Cần truy vết,thấy cái nào cần sửa thì cộng vào.