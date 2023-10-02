#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>> du0,du1,du2;
    int tong=0;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        tong+=x;
        if(x%3==0) du0.push(x);
        else if(x%3==1) du1.push(x);
        else if(x%3==2) du2.push(x);
    }
    int du=tong%3;
    if(du==0)
    {
        priority_queue<int,vector<int>> res;
        while(!du0.empty())
        {
            res.push(du0.top()); du0.pop();
        }
        while(!du1.empty())
        {
            res.push(du1.top()); du1.pop();
        }
        while(!du2.empty())
        {
            res.push(du2.top()); du2.pop();
        }
        if(res.empty()) cout<<"-1";
        else if(res.top()==0) cout<<"0";
        else
        {
            while(!res.empty())
            {
                cout<<res.top(); res.pop();
            }
        }
    }
    else if(du==1)
    {
        if(du1.size()>=1) du1.pop();
        else 
        {
            if(du2.size()<2)
            {
                cout<<"-1"<<"\n";
                return;
            }
            else 
            {
                du2.pop(),du2.pop();
            } 
        }
        priority_queue<int,vector<int>> res;
        while(!du0.empty())
        {
            res.push(du0.top()); du0.pop();
        }
        while(!du1.empty())
        {
            res.push(du1.top()); du1.pop();
        }
        while(!du2.empty())
        {
            res.push(du2.top()); du2.pop();
        }
        if(res.empty()) cout<<"-1";
        else if(res.top()==0) cout<<"0";
        else 
        {
            while(!res.empty())
            {
                cout<<res.top(); res.pop();
            }
        }
    }
    else if(du==2)
    {
        if(du2.size()>=1) du2.pop();
        else 
        {
            if(du1.size()<2)
            {
                cout<<"-1"<<"\n";
                return;
            }
            else 
            {
                du1.pop(),du1.pop();
            } 
        }
        priority_queue<int,vector<int>> res;
        while(!du0.empty())
        {
            res.push(du0.top()); du0.pop();
        }
        while(!du1.empty())
        {
            res.push(du1.top()); du1.pop();
        }
        while(!du2.empty())
        {
            res.push(du2.top()); du2.pop();
        }
        if(res.empty()) cout<<"-1";
        else if(res.top()==0) cout<<"0";
        else
        {
            while(!res.empty())
            {
                cout<<res.top(); res.pop();
            }
        }
    }
    cout<<"\n";
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}