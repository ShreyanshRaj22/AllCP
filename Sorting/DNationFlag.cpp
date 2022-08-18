#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a)
{
    int n=a.size();
    int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
        {
            swap(a[m],a[l]);
            m++;
            l++;

        }else if(a[m]==2)
        {
            swap(a[m],a[h]);
            m++;
            h++;
        }
        else{
            m++;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    partition(a);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}