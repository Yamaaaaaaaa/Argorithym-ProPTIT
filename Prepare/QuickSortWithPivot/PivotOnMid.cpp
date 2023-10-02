void qsort(int a[],int l,int r)
{
	if(l>r) return;
	int left=l,right=r;
	int pivot=a[(l+r)/2];
	while(left<right)
	{
		while(a[left]<pivot) left++;
		while(a[right]>pivot) right--;
		if(left<=right) swap(a[left++],a[right--]);
	}
	if(left<r) qsort(a,left,r);
	if(right>l) qsort(a,l,right);
	return;
}
