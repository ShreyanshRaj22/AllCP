#include<bits/stdc++.h>
using namespace std;
bool isEqual(vector<int>& ct, vector<int>& cp)
{
    for(int i=0;i<256;i++)
    {
        if(ct[i]!=cp[i]) return false;
    }
    return true;

}
bool isPresent(string& txt, string& pat)
{
    vector<int> ct(256,0);
    vector<int> cp(256,0);
    for(int i=0;i<pat.size();i++)
    {
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.size();i<txt.size();i++)
    {
        if(isEqual(ct,cp)) return true;
        ct[txt[i]]++;
        ct[txt[i-pat.size()]]--;
    }
    return false;
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isPresent(s1,s2)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}