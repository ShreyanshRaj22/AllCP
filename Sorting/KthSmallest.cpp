#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a,int l,int h)
{
    int p = a[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<p)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[h]);
    return i;
}
int kthSmallest(vector<int>& a,int k)
{
    int n = a.size();
    int l=0,h=n-1;
    while(l<=h)
    {
        int p = partition(a,l,h);
        if(p<k-1){l=p+1;}
        else if(p==k-1) return p;
        else h=p-1;
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int k;
    cin>>k;
    cout<<a[kthSmallest(a,k)]<<"\n";
    return 0;
}