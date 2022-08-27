#include<bits/stdc++.h>
using namespace std;
bool lre(string& s)
{
    int n=s.size();
    vector<int> count(26,0);
    for(int i=0;i<n;i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;i<n;i++)
    {
        if(count[s[i]-'a']>1)
        {
            cout<<s[i]<<"\n";
            return true;
        }
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    bool flag=lre(s);
    if(!flag) cout<<"No repeating element.\n";
    return 0;
}