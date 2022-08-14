#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i!=0){if(a[i-1]==a[i]) i++; continue;}
        
        if(a[i]>b[j]) j++;
        else if(a[i]<b[j]) i++;
        else {cout<<a[i]<<" ";i++;j++;}

    }
    cout<<"\n";

    return 0;
}