#include<bits/stdc++.h>
using namespace std;
bool anagram(string& s1, string& s2)
{
    vector<int> count(26,0);
    if(s1.size()!=s2.size()) return false;
    for(int i=0;i<s1.size();i++)
    {
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0) return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)) cout<<"Anagram\n";
    else cout<<"Not Anagram\n";
    return 0;
}