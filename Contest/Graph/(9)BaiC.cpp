#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int n,a[250][250],visited[250][205];
int dx[5]={1,0},	dy[5]={0,1};
string huong="DR";
int ok=0;
//i,j+1;
//i+1,j
struct dgdi{
	string res;
	int x,y;
};
void Loang()
{
	queue<dgdi> q;
	dgdi q1; q1.res=""; q1.x=1; q1.y=1;
	q.push(q1);
	string kq="";
	int ok=0;
	for(int i=1;i<=n*n;i++) kq+='R';
	while(!q.empty())
	{
		string s=q.front().res;
		int X=q.front().x,Y=q.front().y;
		q.pop();
		if(s>kq) continue;
		if(X==n&&Y==n) 
		{
			kq=min(kq,s); ok=1;
			continue;
		}
		for(int i=0;i<=1;i++)
		{
			if(X+dx[i]<=n && Y+dy[i]<=n && a[X+dx[i]][Y+dy[i]] == 1 )
			{
				dgdi q2; q2.res=s+huong[i]; q2.x=X+dx[i]; q2.y=Y+dy[i];
				q.push(q2);
			}
		}
	}
	if(ok==1) cout<<kq;
	else cout<<"-1";
}
void Solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	if(a[n][n]==0) cout<<"-1";
	else
	{
		Loang();
	}
	return ;
}
int main()
{
	Faster();
	Solve();
	return 0;
}