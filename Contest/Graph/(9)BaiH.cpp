#include <bits/stdc++.h>
using namespace std;
int v,e,op,ed;
int visited[2000];
vector< pair<int,int> > dinhke[2000];
//QHD + DFS
void dijkstra(int op)
{
    vector<int> d(2000,1e9); //Khác với DIJstra chút : mảng D[I] này lưu đường kính NHỎ NHẤT của (CÁC ĐK lớn nhất của các dãy đến đỉnh U ->I)
    queue<pair<int,int>> pq;//dk- đỉnh
    pq.push({0,op});
    d[op]=0;
    int z=0;
    while(!pq.empty())
    {
        pair<int,int> top=pq.front(); 
        int u=top.second ;
        int dk=top.first ;
       // cerr<<u<<" "<<dk<<" "<<d[u]<<"\n";
        pq.pop();
        if(d[u]==1e9) continue;//nếu chưa co gt nào cho d[u] ==> bỏ ,ko cần xét nữa.
        for(auto x: dinhke[u])
        {
            int v=x.first;
            int z=x.second;
            if(d[v] > max(d[u],z)) //NẾU d[v]>,có nghĩa là ĐK lớn nhất trong các dãy đến V có 1 giá trị nhỏ hơn.
            {
                d[v]=max(d[u],z);
                pq.push({d[v],v});;
           }
        }
    }
    if(d[ed]==1e9) cout<<"-1";
    else cout<<d[ed];
}
int main()
{

    cin>>v>>e>>op>>ed;
    for(int i=1;i<=v;i++) dinhke[i].clear();
    for(int i=1;i<=e;i++)
    {
        int x,y,z;	cin>>x>>y>>z;
        dinhke[x].push_back({y,z});
        dinhke[y].push_back({x,z});
    }
    dijkstra(op);

	return 0;
}