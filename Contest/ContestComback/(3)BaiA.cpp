#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]<='z'&&s[i]>='a') s[i]-=32;
    }
    cout<<s;
    return 0;
}