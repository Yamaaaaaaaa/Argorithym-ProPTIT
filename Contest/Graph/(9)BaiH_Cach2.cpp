#include <bits/stdc++.h>
using namespace std;
int v,e,op,ed;

vector< pair<int,int> > dinhke[2000];
//Binary_Search.
//L-> R : đường kính nhỏ nhất => đường kính lớn nhất của dãy.
// Mid =(R-L)/2 .
//Xét dfs(1->n) 
//- Nếu trên đg đi mà có ổng >MId thì bỏ.
//==>> Nếu ta có thể tìm đc đường đi đến đích với cái điều kiện qq trên 
//    ==> Kết quả bài toán chác chắc sẽ <MID 
//VD: mid=6, nếu có đường đi >6, bỏ đi
// Nếu ta tìm đc đường đi => chắc chắn sẽ có ít nhất 1 đg đi có DDKMAXX <6
int main()
{
    cin>>v>>e>>op>>ed;
    for(int i=1;i<=v;i++) dinhke[i].clear();
    int l=1e9,r=0;
    for(int i=1;i<=e;i++)
    {
        int x,y,z;	cin>>x>>y>>z;
        dinhke[x].push_back({y,z});
        dinhke[y].push_back({x,z});
        l=min(l,z);
        r=max(r,z);
    }
    int res=1e9;
    while(l<=r)
    {
        //nếu tồn tại 
        int mid=(r+l)/2;
       
        int visited[2000]={};
        queue<int> q;
        q.push(1);
        int ok=0;
        while(!q.empty())
        {
            int tmp=q.front();
            q.pop();
            visited[tmp]=1;
            if(tmp==ed)
            {
                ok=1; //đã tìm đc đường.
                break;
            }
            for(auto x: dinhke[tmp])
            {
                if(visited[x.first]==0 && x.second<= mid)
                {
                    q.push(x.first);
                }
            }
        }
        //cerr<<l<<" "<<r<<" "<<mid<<" "<<ok<<"\n";
        if(ok==0) 
        {
            l=mid+1;
            if(l==r) 
            {
                cout<<r+1;
                return 0;
            }
        }
        else
        {
            if(l==r)
            {
                cout<<l;
                return 0;
            }
            r=mid-1;
        } 
    }
	return 0;
}