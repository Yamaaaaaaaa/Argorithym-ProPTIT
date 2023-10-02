//Faster()
#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n;cin>>n;
    int a[1000]={};
    a[1]=n;
    int cnt=1;
    cout<<"("<<a[1]<<")";
    while(1)
    {
        int i=cnt;
        while(i>=1&&a[i]==1) i--; //bo qua cac so 1;
        if(i==0) 
        {
            cout<<"\n";
            break;
        }
        else{
            cout<<" ";
            a[i]--;
            int d=cnt-i+1; //so don vi(1) da bo qua va so 1 vua lay cua a[i];
            int p=d/a[i]; //cac so bang a[i] se viet ve sau a[i]; 
            int q=d%a[i]; //so nho nhat con thua
			cnt=i;
            if(p!=0)
            {
            	for(int j=1;j<=p;j++)
	            {
	                cnt++;
	                a[cnt]=a[i];
	            }
			}
            if(q!=0)
            {
                cnt++;
                a[cnt]=q;
            }
        }
        cout<<"(";
        for(int i=1;i<=cnt;i++)
        {
            cout<<a[i];
            if(i!=cnt) cout<<" ";
            else cout<<")";
        }
    }
    return;
}
int main()
{
	Faster();
    int t;cin>>t;
	while(t--) Solve();
	return 0;
}