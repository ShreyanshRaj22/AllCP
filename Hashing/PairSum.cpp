#include<bits/stdc++.h>
using namespace std;
bool pSum(int a[],int n, int v)
{
    unordered_set<int> s;
    
    for(int i=0;i<n;i++)
    {
        if(s.count(v-a[i]))
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
    for(int i=0;i<n;i++) cin>>a[i];
    int v;
    cin>>v;
    if(pSum(a,n,v)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}