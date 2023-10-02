#include <bits/stdc++.h>
using namespace std;
int v,e,u;
vector <int> dinhke[2000];
int visited[2000];
void nhap()
{
    cin>>v>>e>>u;
    for(int i=1;i<=v;i++)
    {
        dinhke[i].clear();
    }
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        dinhke[x].push_back(y);
        dinhke[y].push_back(x);
    }
    memset(visited,0,sizeof(visited));
}
void bfs()
{
    //Luu cac dinh theo thu tu duyet
    //Sử dụng hàng đợi: Thêm tất cả các đỉnh có thể đi đến từ q.top() (Trừ những cái đã đi qua rồi)
                       //=> Cho đến khi không còn phần tử nào nữa
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp=q.front();
        q.pop();
        cout<<tmp<<" ";
        for(int x:dinhke[tmp])
        {
            if(visited[x]==0)
            {
                q.push(x);
                visited[x]=1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nhap();
        bfs();
        cout<<"\n";
    }
}