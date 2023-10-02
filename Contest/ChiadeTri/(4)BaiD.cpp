#include <bits/stdc++.h>
using namespace std;

void nhan(string a,string b)
{
    int i1=0;int j1=0;
    int s[100005]={};  //de s[]=0 ma lat cong don//6 cs thoi nhe,hon la chay fail do
    int n1=a.length()-1;
    int n2=b.length()-1;
    for(int i=n1;i>=0;i--)
    {
        j1=0 ;//reset lai j1 de xet nhan a[i] voi b tiep
        int mem=0;//mem phai tao o ben trong tai vi phep cong lam ben trong
        for(int j=n2;j>=0;j--)
        {
            int z=s[i1+j1]+((int)a[i]-48)*((int)b[j]-48)+mem;
            mem=z/2;
            s[i1+j1]=z%2;
            j1++;//xet theo j neen j1++;
        }
        if(mem>0)
        {
            s[i1+j1]+=mem;
        }
        i1++;
    }
    int k=i1+j1-1;
    while(k>=1 && s[k]==0) k--;
    long long res=0;
    for(int i=k;i>=1;i--)
    {
        res+=s[i];
        res*=2;
    }
    res+=s[0];
    cout<<res<<"\n";
    return;
}



int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        nhan(a,b);
    }
    return 0;
}