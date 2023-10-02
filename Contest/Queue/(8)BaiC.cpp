#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int to_int(string s)
{
    int tmp=0;
    for(int i=0;i<s.length();i++)
    {
        tmp*=10;tmp+=((int)s[i]-48);
    }
    return tmp;
}
int snt(int tmp)
{
    if(tmp<=1) return 0;
    for(int i=2;i<=sqrt(tmp);i++)
    {
        if(tmp%i==0) return 0;
    }
    return 1;
}
void Solve()
{
	string mau,res;
    cin>>mau>>res;
    int mark[20000]={};
    queue<pair<string,int>> q;
    if(mau==res)
    {
        cout<<"0";
        return;
    } 

    pair<string,int> p;
    p.first=mau;p.second=0;
    q.push(p);
    mark[to_int(mau)]=1; //nho danh dau cai phan tu dau tien
    while(!q.empty())
    {
        string tmp=q.front().first;
        int step=q.front().second;
        q.pop();
        if(tmp==res)
        {
            cout<<step;
            return;
        }
        for(int i=0;i<4;i++) //Tao cac cau hinh
        {
            for(int j=0;j<=9;j++)
            {
                string x=tmp;
                x[i]=(char)(j+48);
                int X=to_int(x);
                if(snt(X)==1&&mark[X]==0&&X>=1000) //TH X<1000(co <4 cs) Sai
                {
                    pair<string,int> pp;
                    pp.first=x;pp.second=step+1;
                    q.push(pp);
                    mark[X]++;
                }
            }
        }
    }
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) 
    {
        Solve();
        cout<<"\n";
    }
	return 0;
}