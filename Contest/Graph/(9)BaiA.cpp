#include <bits/stdc++.h>
using namespace std;
int main()
{
	int v,e;
	cin >>v>>e;
	vector<int> dinhke[v+10];
	for(int i=1;i<=e;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    dinhke[x].push_back(y);
	    dinhke[y].push_back(x);
	}

	for(int i=1;i<=v;i++)
	{
        sort(dinhke[i].begin(),dinhke[i].end());
		if(dinhke[i].size()==0) continue;
	    cout<<"Dinh ke cua "<<i<<" : ";
	    
	    for(int j=0;j<dinhke[i].size();j++)
	    {
            cout<<dinhke[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}