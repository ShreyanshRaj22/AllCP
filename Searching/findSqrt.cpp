#include<bits/stdc++.h>
using namespace std;
int sqrt(int x)
{
    int low=1,high=x,ans=1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int midS=mid*mid;
        if(midS==x) return mid;
        else if(midS<x) {low=mid+1;ans=mid;}
        else high=mid-1;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sqrt(n)<<"\n";
    return 0;

}