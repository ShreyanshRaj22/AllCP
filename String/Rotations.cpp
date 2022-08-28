#include<bits/stdc++.h>
using namespace std;
bool rotations(string& s1,string& s2)
{
    if(s1.size()!=s2.size()) return false;
    return ((s1+s1).find(s2)!=string::npos);

}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(rotations(s1,s2)) cout<<"Yes\n";
    else cout<<"No\n";
    
    return 0;
}