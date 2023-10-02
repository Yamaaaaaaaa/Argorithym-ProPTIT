#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long dp[2500][2500];
    long long a[2500]={};
    memset(dp,0,sizeof(dp));
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>a[i];
    sort(a+1, a+n+1);
	for(int i = 1; i <= n; i++)
	{
		for(int j = i-1; j >= 1; j--)
		{
			dp[j][i] = min(dp[j+1][i], dp[j][i-1]) + a[i] - a[j];
		}
	}
	cout<<dp[1][n];
    return 0;
}