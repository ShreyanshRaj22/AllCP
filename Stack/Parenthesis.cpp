#include<bits/stdc++.h>
using namespace std;
bool isBal(string& s)
{
    int n=s.size();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('|| s[i]=='{'|| s[i]=='[') st.push(s[i]);
        else
        {
            char ch = st.top();
            if(ch=='(' && s[i]!=')') return false;
            else if(ch=='{' && s[i]!='}') return false;
            else if(ch=='[' && s[i]!=']') return false;
            else st.pop();
        }
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(isBal(s)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}