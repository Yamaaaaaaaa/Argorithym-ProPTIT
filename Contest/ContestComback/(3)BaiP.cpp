#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    int res=1e9;
    int b[15]={1,1,1,2,2,2,3,3,3,4,4,4};
    do
    {
        int t1=0,t2=0,t3=0,t4=0;
        for(int i=0;i<12;i++)
        {
            if(b[i]==1) t1+=a[i];
            if(b[i]==2) t2+=a[i];
            if(b[i]==3) t3+=a[i];
            if(b[i]==4) t4+=a[i];
        }      
        int maxx=max(t1,max(t2,max(t3,t4)));
        int minn=min(t1,min(t2,min(t3,t4)));
        res=min(maxx-minn,res);
    }while(next_permutation(b,b+12));
    cout<<res;
    return 0;
}