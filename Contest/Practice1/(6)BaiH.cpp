#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
    queue<int>q;
    string lenh;
	while(1)
    {
        cin>>lenh;
        if(lenh=="END.") break;
        else if(lenh=="1")
        {
            int tin;cin>>tin;
            q.push(tin);
            cout<<"NEW"<<"\n";
        }
        else if(lenh=="2")
        {
            while(q.size()>0)
            {
                cout<<q.front();
                q.pop();
                if(q.size()!=0) cout<<" ";
                else cout<<"\n";
            }
        }
    }
}
int main()
{
	Faster();
	Solve();
	return 0;
}