#include <bits/stdc++.h>
using namespace std;
int main()
{
    int xi,yi,xw,yw,R;
    cin>>xi>>yi>>xw>>yw>>R;
    double s=sqrt(abs(xi-xw)*abs(xi-xw)+abs(yi-yw)*abs(yi-yw));
    int chia=0;
    int t;
    if(s>(int)s )
    {
        chia+=1;
        t=(int)s;
    }
    else t=(int)s;
    if(t%(2*R)!=0) 
    {
        chia=chia+(t/(2*R))+1;
    }
    else chia=chia+(t/(2*R));
    cout<<chia;
    return 0;
}