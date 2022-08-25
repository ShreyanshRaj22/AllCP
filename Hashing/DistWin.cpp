#include<bits/stdc++.h>
using namespace std;
int dist(int a[],int n,int k)
{
    for(int i=0;i<n-k+1;i++)
    {
        unordered_set<int> s(a+i,a+i+k);//Very Important line keep in mind the limits!!!!!
        cout<<s.size()<<" ";

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
    dist(a,n,k);
    return 0;
}