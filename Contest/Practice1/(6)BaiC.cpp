//Faster()
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int sangnt[5000000];
int uoc[5000000];
void sang()
{
    sangnt[0]=sangnt[1]=1;
    for(int i=2;i<sqrt(5000000);i++)
    {
        if(sangnt[i]==0)
        {
            for(int j=i*i;j<=5000000;j+=i) sangnt[j]=1;
        }
    }
    uoc[0]=uoc[1]=1;
    for(int i=2;i<sqrt(5000000);i++)
    {
        for(int j=i*i;j<sqrt(5000000);j+=i)
        {
            uoc[j]+=2;
            if(j==i*i) uoc[j]--;
        }
        cout<<i<<" "<<uoc[i]<<"\n";   
    }
    for(int i=2;i<=5000000;i++)
    {
        if(snt[i])
    }
    return;
}

int main()
{
	Faster();
    sang();
	//Solve();
	return 0;
}