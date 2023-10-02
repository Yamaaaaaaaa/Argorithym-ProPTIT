#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
// Sử dụng loang thôi (quee) //sử dụng thêm DFS 2 đầu.
// Ta thấy cây cang phình to hơn.
// Ta sẽ DFS cả kết quả và xâu ban đầu => ta có thể cho kết quả và bắt đầu ở giữa
// DFS ban đầu trc,lưu tất cả vào map. (DFS khoảng 20->25 lần thôi)
//Sau đó thì DFS kết quả,nếu gặp đc 1 cái mà map[]>1 thì ta có kết quả rồi.
void Try(string s)
{
   // cerr<<s<<" "<<cnt<<"\n";
    int res=1e9;
    map<string,int> mp;
    mp[s]=1;
    queue<pair<string,int> > q;
    q.push({s,0});
    while(!q.empty())
    {
       
        string tmp=q.front().first; 
        int cnt=q.front().second; 
      //   cerr<<q.front().first<<" "<<cnt<<"\n";
        q.pop();
        if(tmp=="1238004765") 
        {
            cout<<cnt;
            return;
        }       
        string tmp1=""; tmp1=tmp1+tmp[3]+tmp[0]+tmp[2]+tmp[7]+tmp[4]+tmp[1]+tmp[6]+tmp[8]+tmp[5]+tmp[9];
        string tmp2=""; tmp2=tmp2+tmp[0]+tmp[4]+tmp[1]+tmp[3]+tmp[8]+tmp[5]+tmp[2]+tmp[7]+tmp[9]+tmp[6];
        
        if(mp[tmp1]==0) 
        {
            mp[tmp1]=1;
            q.push({tmp1,cnt+1}); 
        }
        if(mp[tmp2]==0) 
        {
            mp[tmp2]=1;
            q.push({tmp2,cnt+1});  
        }  
    }
    cout<<"-1";
    return;
}
int main()
{
    Faster();
    string s="";
    for(int i=1;i<=10;i++)
    {
        char x;cin>>x;
        s=s+x;
    }  
    Try(s);
    return 0;
}