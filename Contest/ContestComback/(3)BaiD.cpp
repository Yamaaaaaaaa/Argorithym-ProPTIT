#include <bits/stdc++.h>
using namespace std;
int trave(char c)
{
    if(c=='I') return 1;
    else if(c=='V') return 5;
    else if(c=='X') return 10; 
    else if(c=='L') return 50;
    else if(c=='C') return 100;
    else if(c=='D') return 500;
    else if(c=='M') return 1000;
    return 0;
}
int check(char a,char b)
{
    if(a=='I'&&b=='X')
    {
        return 1;
    }
    else if(a=='I'&&b=='V')
    {
        return 1;

    }
    else if(a=='X'&&b=='L')
    {
        return 10;
        
    }
    else if(a=='X'&&b=='C')
    {
        return 10;
        
    }
    else if(a=='C'&&b=='D')
    {
        return 100;
        
    }
    else if(a=='C'&&b=='M')
    {
        return 100;
    }
    return 0;
}
int main()
{
    string s;
    cin>>s;
    int res=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        res+=(trave(s[i]));
        while(check(s[i-1],s[i])!=0)
        {
            res-=check(s[i-1],s[i]);
            i--;
        }
    }
    cout<<res;
    return 0;
}