#include <iostream>
#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dieukienso(string a,string b)
{
	if(a.length()>b.length()) return 1;
	else if(a.length()==b.length())
	{
		if(a>b) return 1;
	}
	return -1;
}

int partitionso(string a[],int l,int r)
{
	int left=l;
	int right=r-1;
	string pivot=a[r];
	while(1)
	{
		while(left<=right && dieukienso(a[left],pivot)==-1) left++;
		while(left<=right && dieukienso(a[right],pivot)==1) right--;
		if(left>=right) break;
		string tmp=a[left];
		a[left]=a[right];
		a[right]=tmp;
		
		left++;
		right--;
	}
	string tmp=a[left];
	a[left]=a[r];
	a[r]=tmp;
	return left;
}
void qsortso(string a[],int l,int r)
{
	if(l<=r)
	{
		int p=partitionso(a,l,r);
		qsortso(a,l,p-1);
		qsortso(a,p+1,r);
	}
	return ;
}


int partitionchu(string a[],int l,int r)
{
	int left=l;
	int right=r-1;
	string pivot=a[r];
	while(1)
	{
		while(left<=right && a[left]<pivot) left++;
		while(left<=right && a[right]>pivot) right--;
		if(left>=right) break;
		string tmp=a[left];
		a[left]=a[right];
		a[right]=tmp;
		
		left++;
		right--;
	}
	string tmp=a[left];
	a[left]=a[r];
	a[r]=tmp;
	return left;
}
void qsortchu(string a[],int l,int r)
{
	if(l<=r)
	{
		int p=partitionchu(a,l,r);
		qsortchu(a,l,p-1);
		qsortchu(a,p+1,r);
	}
	return ;
}
void Solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int status[100000], d=0;
		string so[10000];int ds=0;
		string chu[10000];int dc=0;
		//Nhap
		while(1)
		{
			string s;
			cin>>s;
			if(s[s.length()-1]=='.') 
			{
				s.erase(s.begin()+s.length()-1,s.end());
				if(s[0]>='0'&&s[0]<='9')
				{
					status[d++]=0;
					so[ds++]=s;
				}
				else
				{
					status[d++]=1;
					chu[dc++]=s;
				}
				break;	
			}
			else
			{
				s.erase(s.begin()+s.length()-1,s.end());
				if(s[0]>='0'&&s[0]<='9')
				{
					status[d++]=0;
					so[ds++]=s;
				}
				else
				{
					status[d++]=1;
					chu[dc++]=s;
				}
			}	
		}
		
		//Solve
		qsortso(so,0,ds-1);
		qsortchu(chu,0,dc-1);
//		
		int i=0,j=0;
		while(1)
		{
			if(status[i+j]==1)
			{
				cout<<chu[i];
				i++;
			}
			else 
			{
				cout<<so[j];
				j++;
			}
			if(i+j!=d) cout<<", ";
			else 
			{
				cout<<".";
				break;
			}
		}
		cout<<"\n";
	}
	return;
}
int main()
{
	Faster();
	Solve();
	return 0;
}
