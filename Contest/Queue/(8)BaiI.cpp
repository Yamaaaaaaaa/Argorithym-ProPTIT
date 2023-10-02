#include <bits/stdc++.h>
using namespace std;
int x[1000];
int b[10]={6,8};
int n;
vector<long long> vec;
long long to_ll(int a[],int i)
{
    long long res=0;
    for(int j=1;j<=i;j++)
    {
        res*=10;res+=a[j];
    }
    return res;
}
void Try(int i,int n) 
{
    for (int j = 0; j <=1; j ++) 
	{
        x[i]=b[j];
        if (i == n)
        {
			vec.push_back(to_ll(x,n));
		}
        else Try(i + 1,n);
    }
}

int main()
{
	for(int i=1;i<=18;i++)
    {
        Try(1,i);
    }
    int t;cin>>t;
    while(t--)
    {
        long long a,b;cin>>a>>b;
        int x=lower_bound(vec.begin(),vec.end(),a)-vec.begin();
        int y=upper_bound(vec.begin(),vec.end(),b)-vec.begin();
        cout<<y-x<<"\n";
    }
	return 0;
}