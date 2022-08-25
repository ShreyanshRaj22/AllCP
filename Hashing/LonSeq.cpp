#include<bits/stdc++.h>
using namespace std;
int lSeque(int a[],int n)
{
    int cl=0,l=0;
    unordered_set<int> s(a,a+n);
    for(int i=0;i<n;i++)
    {
        cl=1;
        int cu=a[i]+1;
        while(s.find(cu)!=s.end())
        {
            cu++;
            cl++;
        }
        if(cl>l) l=cl;
    }
    return l;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<lSeque(a,n)<<"\n";
    return 0;
}