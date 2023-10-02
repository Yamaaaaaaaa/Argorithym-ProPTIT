#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        pq.push(x);
    }
    long long res=0;
    while(pq.size()>1)
    {
        int tmp1=pq.top(); pq.pop();
        int tmp2=pq.top(); pq.pop();
        res+=(tmp1+tmp2);
        pq.push(tmp1+tmp2);
    }
    cout<<res;
    return 0;
}