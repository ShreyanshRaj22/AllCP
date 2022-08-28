#include<bits/stdc++.h>
using namespace std;
void fillLPS(string& s, int lps[])
{
    int n=s.size();
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(s[i]==s[len]) {len++;lps[i]=len;i++;}
        else
        {
            if(len==0)
            {
                lps[i]=0;
                i++;

            }
            else
            {
                len=lps[len-1];

            }
        }
    }
    for(int i=0;i<n;i++) cout<<lps[i]<<" ";

}
int main()
{
    string s;
    cin>>s;
    int lps[s.size()];
    fillLPS(s,lps);
    return 0;
}