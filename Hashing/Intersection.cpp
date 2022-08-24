#include<bits/stdc++.h>
using namespace std;
int intersection(int a[],int b[],int n1,int n2)
{
    unordered_set<int> s1(a,a+n1);
    unordered_set<int> s2(b,b+n2);
    int d=0;
    for(auto x: s1)
    {
        if(s2.count(x)) d++;
    }
    cout<<d<<"\n";
    return d;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    intersection(a,b,n1,n2);
    return 0;
}