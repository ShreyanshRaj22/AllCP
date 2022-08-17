#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a,int l,int h)
{
    int p=a[h];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            i++;
        } while (a[i]<p);
        do
        {
            j--;
        } while (a[j]>p);
        if(i>=j)
        {
            for(int k=l;k<=h;k++){if(a[k]==p){swap(a[k],a[j]);break;}}
            return j;
        }
        swap(a[i],a[j]);
    }
}
int qSort(vector<int>& a,int l,int h)
{
    if(l<h)
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