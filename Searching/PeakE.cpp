#include<bits/stdc++.h>
using namespace std;
int peak(int a[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid]))
        {
            return mid;
        }
        
            if(a[mid-1]>=a[mid]&&mid>0) high = mid-1;
            else low=mid+1;
        
        
        
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
    cout<<peak(a,n)<<"\n";
    return 0;
}