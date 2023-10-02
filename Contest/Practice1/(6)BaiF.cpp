#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	long long n,a,b;
    cin>>n>>a>>b;
    if((2*a)>b) //a>b/2
    {
        long long d=n/2;
        if(n%2==0) 
        {
            cout<<d*b<<"\n";
        }
        else
        {
            cout<<d*b+a<<"\n";
        }
    }
    else //a<b/2
    {
        cout<<a*n<<"\n";
    }
    return;
}
int main()
{
	Faster();
    int t;
    cin>>t;
	while(t--) Solve();
	return 0;
}