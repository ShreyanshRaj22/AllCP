#include<bits/stdc++.h>
using namespace std;
bool isSum(int a[],int n)
{
    int ps=0;
    
    unordered_set<int> h;
    for(int i=0;i<n;i++)
    {
        ps+=a[i];
        if(h.count(ps))
        return true;
        if(ps==0)
        return true;
        h.insert(ps);
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(isSum(a,n)) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}