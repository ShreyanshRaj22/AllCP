
#include<bits/stdc++.h>
using namespace std;
int repeating(int a[],int n)
{
    int slow,fast;
    slow=fast=a[0]+1;
    do
    {
        slow=a[slow]+1;
        fast=a[a[fast]+1]+1;
    } while (slow!=fast);
    slow=a[0]+1;
    while(slow!=fast)
    {
        slow=a[slow]+1;
        fast=a[fast]+1;
    }
    return slow-1;


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int& x: a) cin>>x;
    cout<<"REPEATING ELEMENT: "<<repeating(a,n)<<"\n";

    return 0;
}