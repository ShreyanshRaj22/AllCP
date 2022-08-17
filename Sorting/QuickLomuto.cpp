#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&a, int l,int h)
{
    int p=a[h];
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
void qSort(vector<int>& a,int l,int h)
{
    if(h>l)
    {
        int pi=partition(a,l,h);
        qSort(a,l,pi-1);
        qSort(a,pi+1,h);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    qSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}