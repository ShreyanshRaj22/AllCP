#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
int merge(vector<int>& a, int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    vi left(n1);
    vi right(n2);
    for(int i=0;i<n1;i++) left[i]=a[low+i];
    for(int i=0;i<n2;i++) right[i]=a[n1+i];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[i]){a[k++]=left[i++];}
        else a[k++]=right[j++];
    }
    while(i<n1)
    {
        a[k++]=left[i++];
    }
    while(j<n2)
    {
        a[k++]=right[j++];
    }
    return 0;
}
void mergeSort(vector<int>& a,int r, int l)
{
    if(r>l)
    {
        int m = l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    mergeSort(a,n-1,0);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}