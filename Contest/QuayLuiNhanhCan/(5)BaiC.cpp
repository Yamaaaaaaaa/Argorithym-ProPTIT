#include <bits/stdc++.h>
using namespace std;
int a[100][100];
//mang luu vi tri 
int hau[100]; //hau[i]=j :hau hang thu i o vi tri cot j
//2 mang check cot
int cot[100];
//2 mang check dg cheo
int cheo1[100];
int cheo2[100];

int res=0;
int n;
//Chay Try theo huong: dat tung con hau tren tung hang ==> xet dk
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(cot[j]==0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0)
		{
			hau[i]=j;
			cot[j]=cheo1[i-j+n]=cheo2[i+j-1]=1;
			if(i==n)
			{
				res++;
			}
			else Try(i+1);
			cot[j]=cheo1[i-j+n]=cheo2[i+j-1]=0;
		}
	}
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        cin>>n;
		res=0;
		memset(cot,0,sizeof(cot));
		memset(cheo1,0,sizeof(cheo1));
		memset(cheo2,0,sizeof(cheo2));

		Try(1);
		cout<<res<<"\n";
	}
	return 0;
}