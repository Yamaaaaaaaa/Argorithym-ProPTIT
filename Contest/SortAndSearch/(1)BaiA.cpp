#include <bits/stdc++.h>
using namespace std;
//Qsort,Pivot la phan tu dau

//BaiToanCon:
int partition(int a[105000],int l,int h) //ham phan doan tu a[i]
{
	//Nhiem vu:Dua pivot ve vi tri dung
	          //Lon hon pivot ve ben trai
	          //Nho hon pivot ve ben phai
	int left=l;
	int right=h-1;
	int pivot=a[h];
	while(1)
	{		
		while(left<=right && a[left]<pivot) left++; //Dung thi di tiep
	 	while(left<=right&& a[right]>pivot) right--;
		if(left>=right) break;
		swap(a[left],a[right]);//doi cho 2 phan tu dau tien ma sai dk: l<pivot,r>pivot
		left++;
		right--;
	}
	swap(a[left],a[h]);//Dua pivot ve vi tri dung
	return left; 
}

//Ham chinh de chia day con
void qsort(int a[105000],int l,int h)
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
	int n,k;
	cin>>n>>k;
	int a[105000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	qsort(a,0,n-1);
	cout<<a[k-1];
	return 0;
}



