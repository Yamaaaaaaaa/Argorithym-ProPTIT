#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+5];
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pq.push(a[i]);
    } 
    int j=1;
    int l=0;
    int r=0;
    while(j<=n)
    {
        if(pq.top()!=a[j])
        {    
            if(l==0) l=j;
            else r=j;
        }
        pq.pop(); j++;
    }
    cout<<l<<" "<<r;
    return 0;
}