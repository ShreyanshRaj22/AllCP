#include<bits/stdc++.h>
using namespace std;
bool gSum(int a[],int n,int sum)
{
    int ps=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        ps+=a[i];
        if(s.count(ps-sum))
        return true;
        if(ps==sum) return true;
        s.insert(ps);

    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s;
    cin>>s;
    if(gSum(a,n,s)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}