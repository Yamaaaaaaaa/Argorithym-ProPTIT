//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;
    cin>>n;
    string mau;cin>>mau;
    for(int k=1;k<n;k++)
    {
        string tmp=mau;
        string test;cin>>test;
        if(test==tmp)
        {
            cout<<"0"<<"\n";
            continue;
        }
        else
        {
            int ok=0;
            for(int i=0;i<tmp.length();i++)
            {
                tmp=tmp+tmp[0];
                tmp.erase(tmp.begin(),tmp.begin()+1);
                //cerr<<tmp<<" ";
                if(test==tmp) 
                {
                    ok=1;
                    cout<<i+1<<"\n";
                    break;
                }
            }
            if(ok==0) cout<<"-1"<<"\n";
        }
    }
}
int main()
{
	Faster();
	Solve();
	return 0;
}