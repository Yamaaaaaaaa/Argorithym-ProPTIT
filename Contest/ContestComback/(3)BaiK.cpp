#include <bits/stdc++.h>
#define Faster() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Faster();
    int n;cin>>n;
    long long a[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int buoc=0;
    int i=0,j=n-1;
    while(i<j-1)
    {
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else 
        {
            if(a[i]<a[j])
            {  
                a[i+1]+=a[i];
                i++;
                buoc++;
            }
            else
            {
                a[j-1]+=a[j];
                j--;
                buoc++;
            }   
        }
    }
    if(a[i]!=a[j]) buoc++;
    cout<<buoc;
    return 0;
}