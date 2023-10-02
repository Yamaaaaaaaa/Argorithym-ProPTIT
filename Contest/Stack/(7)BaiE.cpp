#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    //BÀI NÀY THỰC TẾ DỄ HIỂU HƠN :
    // HCN LỚN NHẤT TẠO BỞI CỘT I : DÀI: R[I]-L[I]  VỚI R: SÔ ĐẦU TIÊN BÊN TRÁI NHỎ HƠN I;
                                    //RỘNG :CỘT ĐẦU TIÊN BÊN TRÁI LỚN HƠN SÔ BÊN PHẢI
    //CHIỂU RÔNG : A[I];
	Faster();
	int n; cin>>n;
	long long a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	stack<int>st;
	int i=0;
	long long res=0;
	while(i<n)
	{
		if(st.empty() || a[i]>= a[st.top()])
		{
			st.push(i);
            i++;
		}
		else
		{
            int id=st.top(); st.pop();
            if(st.empty())
            {
                long long chieudai=i; //tinh tu cuc dang trc tro lai
                long long chieurong=a[id];
                long long canh=min(chieudai,chieurong);
                res=max(res,canh);
            }
            else
            {
                long long chieudai=i-st.top()-1; //can tu st.top() -> i
                long long chieurong=a[id];
                long long canh=min(chieudai,chieurong);
                res=max(res,canh);
            }
		}
	}
	a[n]=1e9;
	while(!st.empty())
	{
		int id=st.top(); st.pop();
        if(st.empty())
        {
            long long chieudai=i; //tinh tu cuc dang trc tro lai
            long long chieurong=a[id];
            long long canh=min(chieudai,chieurong);
            res=max(res,canh);
        }
        else
        {
            long long chieudai=i-st.top()-1; //can tu st.top() -> i
            long long chieurong=a[id];
            long long canh=min(chieudai,chieurong);
            res=max(res,canh);
        }
	}
	cout<<res*res;
	return 0;
}