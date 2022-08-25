#include<bits/stdc++.h>
using namespace std;
int freq(int a[],int n, int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    int d=n/k;
    for(auto x:m)
    {
        if(x.second>d) cout<<x.first<<" ";
    }
    cout<<endl;
    return 0;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    freq(a,n,k);


    return 0;
}