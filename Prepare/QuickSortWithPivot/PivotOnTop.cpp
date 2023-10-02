#include <bits/stdc++.h>
using namespace std;
//Qsort,Pivot la phan tu dau

//BaiToanCon:
int partition(int a[10000],int l,int h) //ham phan doan tu a[i]
{
	//Nhiem vu:Dua pivot ve vi tri dung
	          //Lon hon pivot ve ben trai
	          //Nho hon pivot ve ben phai
	int left=l;
	int right=h-1;
	int pivot=a[h];
	while(left<right)
	{		
		while(a[left]<pivot) left++; //Dung thi di tiep
	 	while(a[right]>pivot) right--;
		if(left>=right) break;
		swap(a[left++],a[right--]);//doi cho 2 phan tu dau tien ma sai dk: l<pivot,r>pivot
	}
	swap(a[left],a[h]);//Dua pivot ve vi tri dung
	return left; 
}

//Ham chinh de chia day con
void qsort(int a[10000],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);//vi tri pivot da ve dung cho
		
		qsort(a,l,p-1);//xet cac day 2 ben
		qsort(a,p+1,h);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	qsort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
