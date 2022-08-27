#include<bits/stdc++.h>
using namespace std;
void rev(string& s)
{
    int n=s.size();
    vector<string> a;
    int sp=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            a.push_back(s.substr(sp,i-sp));
             sp=i+1;
            
        }
        if(i==n-1)
        {
            a.push_back(s.substr(sp,i-sp+1));
        }


    }
    for(int i=a.size()-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    string s;
    getline(cin,s);
    rev(s);
    return 0;
}