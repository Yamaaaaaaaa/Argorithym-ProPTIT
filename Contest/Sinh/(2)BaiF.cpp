#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
	Faster();
    int n,check=0,a[10000];
    cin>>n;
    int k=0;
    for(int i=1;i<=n;i++)   a[i]=i;
    do
    {
        for(int i=1;i<=n;i++)  cout<<a[i];
        k=next_permutation(a+1,a+n+1);
        if(k) cout<<" ";
    }while(k);
	return 0;
}