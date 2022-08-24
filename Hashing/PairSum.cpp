#include<bits/stdc++.h>
using namespace std;
bool pSum(int a[],int n, int v)
{
    unordered_set<int> s;
    s.insert(a[0]);
    for(int i=1;i<n;i++)
    {
        if(s.find(v-a[i])!=s.end())
        {
            return true;
        }
        s.insert(a[i]);
    }
    return false;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto x: a) cin>>x;
    int v;
    cin>>v;
    if(pSum(a,n,v)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}