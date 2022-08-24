#include<bits/stdc++.h>
using namespace std;
void freq(int a[],int n)
{
    unordered_map<int,int> s;
    
    for(int i=0;i<n;i++)
    {
        s[a[i]]++;
    }
    for(auto x: s)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }
   
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    freq(a,n);
    return 0;
}