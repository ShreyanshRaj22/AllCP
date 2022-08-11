#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int& x: a) cin>>x;

    for(int i=1;i<n;i++)
    {
        int curr=a[i];
        int j=i-1;
        while(j>=0 && a[j]>curr)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;

    }
    for(int& x: a) cout<<x<<" ";


    return 0;
}