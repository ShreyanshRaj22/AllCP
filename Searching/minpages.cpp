#include<bits/stdc++.h>
using namespace std;
bool isFeasible(int a[],int n,int k,int ans)
{
    int req=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]>ans)
        {
            req++;
            sum=a[i];
        }
        else{
            sum+=a[i];
        }
    }
    return (req<=k);
}
int minPages(int a[],int n,int k)
{
    int sum=0,mx=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        mx = max(a[i],mx);
    }
    int res=0,l=mx,h=sum;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(isFeasible(a,n,k,mid))
        {
            res=mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
        
    }
    return res;


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {cin>>a[i];}
    int k;
    cin>>k;
    cout<<minPages(a,n,k)<<"\n";
    return 0;
}