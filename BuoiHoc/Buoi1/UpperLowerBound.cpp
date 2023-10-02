#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void Solve()
{
	int n,x;
	cin>>n>>x;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	
//	binary_search(a,a+n,x); //ko sd nhieu,vi no chi tra ve có ton tai hay ko?,ko tra ve vi tri
//	upper_bound(a,a+n,x) :tra ve vi tri c?a:PHAN TU DAU TIEN >X
//  lower_bound(a,a+n,x) :tra ve                             <X                
    
	
	//Neu trong day da SX: 
	//==>So phan tu =x : 
	int xh= upper_bound(a,a+n,x) - lower_bound(a,a+n,x); 		
	cout<<xh;
	//1 So luu y:
}
int main()
{
	Faster();
	Solve();
	return 0;
}
