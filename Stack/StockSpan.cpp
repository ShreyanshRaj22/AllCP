#include<bits/stdc++.h>
using namespace std;
void printSpan(vector<int>& a)
{
    stack<int> s;
    s.push(0);
    cout<<1<<" ";
    int n = a.size();
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && a[s.top()]<=a[i])
        {
            s.pop();

        }
        if(s.empty()) cout<<i+1<<" ";
        else cout<<i-s.top()<<" ";
        s.push(i);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> s(n,0);
    for(int i=0;i<n;i++) cin>>s[i];
    printSpan(s);
    cout<<endl;
    return 0;
}