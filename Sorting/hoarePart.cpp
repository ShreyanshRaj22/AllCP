#include<bits/stdc++.h>
using namespace std;
void Partition(vector<int>& a,int l,int h)
{
    int p=a[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            /* code */
            i++;
        } while (a[i]<p);
        do
        {
            /* code */
            j--;
        } while (a[j]>p);
        if(i>=j) return;
        swap(a[i],a[j]);
        
        
    }
}
int main()
{
    return 0;
}