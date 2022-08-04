#include<bits/stdc++.h>
using namespace std;
bool isPairSum(int a[],int n,int s)
{
    int left=0,right=n-1;
    while(left<right)
    {
        if(a[left]+a[right]==s) return true;
        else if(a[left]+a[right]<s) left++;
        else right--;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int s;
    cin>>s;
    if(isPairSum(a,n,s)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}