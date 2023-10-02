#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Ý TƯỞNG: 
    int m,n;cin>>m>>n;
    long long a[m+5][n+5];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    //Ý TƯỞNG: GIỐNG BÀI TIẾT KIỆM. NHƯNG XÉT VỚI TỪNG HÀNG
    long long res=0;
    for(int i=1;i<=m;i++)
    {
        long long tongcot[n+5]={};
        for(int j=1;j<=n;j++)
        {
            for(int k=i;k>=1;k--) //xet chieu cao cho tung cot tai I
            {
                if(a[k][j]==1) tongcot[j]++;
                else break;
            }
        }
        // BAT DAU BAI TIETKIEM
        stack<int>st;
        int j=1;
        long long hcn=0;
        while(j<=n)
        {
            if(st.empty() || tongcot[j]>= tongcot[st.top()])
            {
                st.push(j);
                j++;
            }
            else
            {
                int id=st.top(); st.pop();
                if(st.empty())
                {
                    long long chieudai=j-1; //tinh tu cuc dang trc tro lai
                    long long chieurong=tongcot[id];
                    hcn=max(hcn,chieudai*chieurong);
                }
                else
                {
                    long long chieudai=j-st.top()-1; //can tu st.top() -> i
                    long long chieurong=tongcot[id];
                    hcn=max(hcn,chieudai*chieurong);
                }
            }
        }
        tongcot[n+1]=1e9;
        while(!st.empty())
        {
            int id=st.top(); st.pop();
            if(st.empty())
            {
                long long chieudai=j-1; //tinh tu cuc dang trc tro lai
                long long chieurong=tongcot[id];
                hcn=max(hcn,chieudai*chieurong);
            }
            else
            {
                long long chieudai=j-st.top()-1; //can tu st.top() -> i
                long long chieurong=tongcot[id];
                hcn=max(hcn,chieudai*chieurong);
            }
        }
        res=max(hcn,res);
    }
    cout<<res;
    return 0;
}