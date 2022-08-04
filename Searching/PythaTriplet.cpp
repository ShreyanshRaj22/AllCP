#include<bits/stdc++.h>
using namespace std;
bool pythaT(int a[],int h)
{
    int low=0,high=h-1;
    while(low<high)
    {
        if(a[low]*a[low]+a[high]*a[high]==a[h]*a[h]) return true;
        else if(a[low]*a[low]+a[high]*a[high]>a[h]*a[h]) high--;
        else low++;
    }
    return false;

}
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=2;i--)
    {
        if(pythaT(a,i)) {cout<<"YES\n";flag=1;break;}
    }
    if(flag==0) cout<<"NO\n";
    
    return 0;

}