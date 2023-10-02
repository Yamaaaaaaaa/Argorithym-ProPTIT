//Faster()
#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	string s; cin>>s;
    int ok=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1') s[i]='0';
        else
        {
            ok=1;
            s[i]='1';
            break;
        } 
    }
    if(ok==1) cout<<s;
    else 
    {
        for(int i=s.length()-1;i>=0;i--)
        {
            cout<<'0';
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