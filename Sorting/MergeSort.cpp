#include<bits/stdc++.h>

using namespace std;
void merge(vector<int>& a, int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    vector<int> left(n1,0);
    vector<int> right(n2,0);
    for(int i=0;i<n1;i++) left[i]=a[low+i];
    for(int i=0;i<n2;i++) right[i]=a[mid+1+i];
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[i]){a[k]=left[i];k++;i++;}
        else {a[k]=right[j];k++;j++;}
    }
    while(i<n1)
    {
        a[k]=left[i];
        k++;i++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        k++;j++;
    }
    
}
void mergeSort(vector<int>& a,int l, int r)
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
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}