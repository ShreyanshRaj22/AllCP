#include<bits/stdc++.h>
using namespace std;
int prevG(vector<int>& a)//For next greater element just reverse the solution  
{
    stack<int> s;
    s.push(0);
    cout<<-1<<" ";
    int n = a.size();
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && a[s.top()]<=a[i])
        {
            s.pop();

        }
        if(s.empty()) cout<<-1<<" ";
        else 
        {
            cout<<a[s.top()]<<" ";
            
        }
        s.push(i);

    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    prevG(a);
    return 0;
}