#include<bits/stdc++.h>
using namespace std;
int LargeArea(vector<int>& a)
{
    int n = a.size();
    int area=0,min=0;
    vector<int> saf(n);
    stack<int> s1;
    stack<int> s2;
    vector<int> sab(n);
    saf[0]=-1;
    s1.push(0);
    for(int i=1;i<n;i++)
    {
        while(s1.empty()!=true && a[s1.top()]>=a[i])
        s1.pop();
        if(s1.empty())
        {
            saf[i]=-1;
        }
        else saf[i]=s1.top();
        s1.push(i);
    }
    sab[n-1]=-1;
    s2.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s2.empty()!=true && a[s2.top()]>=a[i])
        s2.pop();
        if(s2.empty())
        {
            sab[i]=-1;
        }
        else sab[i]=s2.top();
        s2.push(i);

    }
    for(int i=0;i<n;i++)
    {
        if(sab[i]!=-1)
        min=sab[i]-saf[i]-1;
        else min = n- saf[i]-1;
        area= max(min*a[i],area);
    }
    cout<<area<<"\n";



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
    LargeArea(a);


    return 0;
}