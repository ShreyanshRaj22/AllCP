#include<bits/stdc++.h>
using namespace std;
int lSubArr(int a[],int n,int sum)
{
    int ps=0,l=0;
    unordered_map<int,int> s;
    for(int i=0;i<n;i++)
    {
        ps+=a[i];
        if(ps==sum) l=i+1;
        if(s.find(ps-sum)==s.end())
        {
            s.insert({ps,i});

        }
        else
        {
            l=max(l,i-s[ps-sum]);
        }
    }
    return l;


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int s;
    cin>>s;
    if(lSubArr(a,n,s)) cout<<lSubArr(a,n,s)<<"\n";
    else cout<<"No\n";
    return 0;
}