#include <bits/stdc++.h>
using namespace std;
int v,e;
vector<int> dinhke[2000];
vector<int> luudinh;
int visited[2000];
int res=0,dem=0;
void dfs(int u)
{
	visited[u]=1;
	dem++;
	for(auto x: dinhke[u])
	{
		if(visited[x]==0) dfs(x);
	}
	return;
}


int main()
{
	cout<<(int)'a';
	cin >>v>>e;
	for(int i=1;i<=e;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    dinhke[x].push_back(y);
	    dinhke[y].push_back(x);
	}
	for(int i=1;i<=v;i++)
    {
        if(visited[i]==0)
        {
            dem=0;
            dfs(i);
			res=max(dem,res);
        }
    }
	cout<<res;
	return 0;
}