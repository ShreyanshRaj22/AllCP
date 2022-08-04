#include<bits/stdc++.h>
using namespace std;
int bisearch(int a[],int low,int high,int x)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int search(int a[],int x)
{
    if(a[0]==x) return 0;
    int i=1;
    while(a[i]<x)
    {
        
        i*=2;
        
    }
    if(a[i]==x) return i;
    
    return bisearch(a,(i/2),i,x);
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<search(a,x);
    return 0;
}