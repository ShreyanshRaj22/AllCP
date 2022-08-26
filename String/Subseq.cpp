#include<bits/stdc++.h>
using namespace std;
bool subseq(string& s1, string& s2)
{
    int j=0;
    int n=s1.size(),m=s2.size();
    for(int i=0;i<n&&j<m;i++)
    {
        if(s1[i]==s2[j])
        j++;
    }    
    return j==m;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(subseq(s1,s2)) cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}