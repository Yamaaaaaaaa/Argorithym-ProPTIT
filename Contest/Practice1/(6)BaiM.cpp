#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int sosanh(string x,string y)
{
    if(x.length()<y.length()) return 1;
    else if(x.length()==y.length())
    {
        if(x<=y) return 1;
    }
    return 0;
}
void Solve()
{
	string a,b;cin>>a>>b;
    int x1=a.length(),x2=b.length();
    vector<string>vec;
    for(int i=x1;i<=x2;i++)
    {
        string tmp="";
        for(int j=1;j<=i;j++)
        {
            tmp=tmp+((char)(j+48));
        }
        while(sosanh(tmp,b)==1)
        {
            if(sosanh(a,tmp)==1) vec.push_back(tmp);
            if(tmp[tmp.length()-1]=='9') break; 
            tmp=tmp+(char)((int)tmp[tmp.length()-1]+1);
            tmp.erase(tmp.begin(),tmp.begin()+1);
        }
    }
    cout<<vec.size()<<"\n";
    cout<<"[";
    for(int i=0;i<vec.size();i++)
    {
        cout<<"["<<vec[i]<<"]";
        if(i!=vec.size()-1) cout<<", ";
    }
    cout<<"]";
    return;
}
int main()
{
	Faster();
	Solve();
	return 0;
}
