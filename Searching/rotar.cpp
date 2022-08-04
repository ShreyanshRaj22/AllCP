#include<bits/stdc++.h>
using namespace std;
int search(int a[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid]) return mid;
        else if(a[mid]>a[low])
        {
            if(x<a[mid] && x>a[low]) high=mid-1;
            else low=mid+1;
        }
        else
        {
            if(x>a[mid] && x<a[high]) low=mid+1;
            else high=mid-1;
        }

    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<search(a,n,x);
    return 0;
}