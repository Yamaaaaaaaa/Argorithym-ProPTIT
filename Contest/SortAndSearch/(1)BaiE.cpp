#include <bits/stdc++.h>
using namespace std;
struct pt{
	int x,xh=0;
};typedef struct pt pt;
int cmp(pt a,pt b)
{
	if(a.xh>b.xh) return 1;
	else if(a.xh==b.xh)
	{
		if(a.x<=b.x) return 1;
	}
	return 0;
}

void qsort(pt a[],int l,int r)
{
 	if(l>=r) return;
 	int left=l;
 	int right=r;
 	pt pivot=a[(l+r)/2];
 	while(left<right)
 	{
 		while(1) 
    {
        if(a[left].xh>pivot.xh) left++;
      	else if(a[left].xh==pivot.xh)
      	{
      		if(a[left].x<pivot.x) left++;
      		else break;
      	}
      	else break;
    }
 		while(1)
 		{
 		    if(a[right].xh<pivot.xh) right--;
      	else if(a[right].xh==pivot.xh)
      	{
      		if(a[right].x>pivot.x) right--;
      		else break;
      	}
      	else break;
 		}
 		
 		if(left<=right) 
 		{
 			pt tmp=a[left];
 			a[left]=a[right];
 			a[right]=tmp;
 			left++;
 			right--;
 		}
 	}
 	if(left<r) qsort(a,left,r);
 	if(right>l) qsort(a,l,right);
 	return;
 }
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int A[n+5];
		pt a[15000];
		int d=0;
		
		map<int,int>mp;
		for(int i=0;i<n;i++) 
		{
			cin>>A[i];
			mp[A[i]]++;
		}
		
		for(int i=0;i<n;i++)
		{
			if(mp[A[i]]>0)
			{
				a[d].x=A[i];
				a[d].xh=mp[A[i]];
				d++;
				mp[A[i]]=0;
			}
		}
		
		qsort(a,0,d-1);
	//	sort(a,a+d,cmp);
		for(int i=0;i<d;i++)
		{
			for(int j=1;j<=a[i].xh;j++)
			{
				cout<<a[i].x;
				if(i==d-1 && j==a[i].xh) cout<<"\n";
				else cout<<" ";
			}
		}
		//cout<<"\n";
	}
	return 0;
}
