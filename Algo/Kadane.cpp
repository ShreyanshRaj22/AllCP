#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int a[],)
{
    int csum=a[0],maxSoFar=a[0];
    for(int i=1;i<n;i++)
    {
        csum=max(csum+a[i],a[i]);
        maxSoFar=max(csum,maxSoFar);

    }
    return maxSoFar;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<maxSumSubArray(a,n)<<endl;
    return 0;
}
