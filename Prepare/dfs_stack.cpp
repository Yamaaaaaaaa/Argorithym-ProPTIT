#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v,e; cin>>v>>e;
    vector<int> dinhke[2000];
    for(int i=1;i<=e;i++)
    {
        int x,y;cin>>x>>y;
        dinhke[x].push_back(y);
        dinhke[y].push_back(x);
    }

    //khoitao stack.
    stack<int> st;
    st.push(1);
    int visited[v+5]={};
    while(!st.empty())
    {
        int dinh=st.top();  st.pop();
        if(visited[dinh] == 1) continue;
        else 
        {
            cout<<dinh<<" ";
            visited[dinh]=1;
            for(int i=0;i<dinhke[dinh].size();i++)  st.push(dinhke[dinh][i]);
        }
    }
    return 0;
}