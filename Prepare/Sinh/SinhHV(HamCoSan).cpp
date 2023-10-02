#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
string s;
int n,check=0,a[1000];
void taochdau()
{
    for(int i=0;i<s.length();i++)   a[i+1]=(int)s[i]-48;
    n=s.length();
    sort(a+1,a+n+1);
}
void Solve()
{
	do{
        for(int i=1;i<=n;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }while(next_permutation(a+1,a+1+n));
}
int main()
{
	Faster();
    cin>>s;
    taochdau();
	Solve();
	return 0;
}