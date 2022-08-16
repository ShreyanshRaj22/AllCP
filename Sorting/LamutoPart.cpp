#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& a,int l,int h)//Last element is the pivot
{
    int p=a[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<p)
        {
            swap(a[i],a[j]);
            i++;
        }
    }
    i++;
    swap(a[i],a[h]);
    return i;

}
int main()
{
    return 0;
}