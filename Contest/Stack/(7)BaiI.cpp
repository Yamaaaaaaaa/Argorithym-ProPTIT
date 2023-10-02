#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    stack<char> trc; //luu những kí tự từ con trỏ trở về
    stack<char> sau; //luu những kí tự sau con trỏ
    int i=0;
    while(i<s.length())
    {
        // if(!trc.empty()) cerr<<"trc"<<i<<" "<<trc.top()<<"\n";
        // if(!sau.empty()) cerr<<"sau"<<i<<" "<<sau.top()<<"\n";
        if(isalnum(s[i]))
        {
            trc.push(s[i]);
        }
        else
        {
            if(s[i]=='<')
            {
                if(!trc.empty())
                {
                    char tmp=trc.top();
                    trc.pop();
                    sau.push(tmp);
                }
            }
            else if(s[i]=='>')
            {
                if(!sau.empty())
                {
                    char tmp=sau.top();
                    sau.pop();
                    trc.push(tmp);
                }
            }
            else if(s[i]=='-')
            {
                if(!trc.empty()) trc.pop();
                // else 
                // {
                //     if(!sau.empty()) sau.pop();
                // }
            }
        }
        i++;
    }
    while(!trc.empty())
    {
        sau.push(trc.top());
        trc.pop();
    }

    while(!sau.empty())
    {
        cout<<sau.top();
        sau.pop();
    }
    return 0;
}