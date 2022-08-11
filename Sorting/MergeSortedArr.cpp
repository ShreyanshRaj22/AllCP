#include<bits/stdc++.h>
using namespace std;
vector<int> merged(vector<int> v1,vector<int> v2)
{
    vector<int> m(v1.size()+v2.size());
    int p1=0,p2=0,x=0;
    while(p1<v1.size() && p2<v2.size())
    {
        if(v1[p1]<v2[p2])
        {
            m[x++]=v1[p1++];
        }else{
            m[x++]=v2[p2++];
        }
    }
    while(p1!=v1.size())
    {
        m[x++]=v1[p1++];
    }
    while(p2!=v2.size())
    {
        m[x++]=v2[p2++];
    }
    return m;

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<m;i++) cin>>v2[i];
    vector<int> ar(n+m);
    ar = merged(v1,v2);
    for(int i=0;i<n+m;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}