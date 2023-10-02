#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int w[n+5],v[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
	}
	int dp[n+5][m+100];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			dp[i][j]=0;
		}
	}
	int res=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j<w[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
			if(i==n)
			{
				if(res<dp[i][j]) res=dp[i][j];
	 		}
		}
		
	}
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
	cout<<res;
	return 0;
} 