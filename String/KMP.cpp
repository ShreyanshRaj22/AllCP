#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
void fillLPS(string& s,vi& lps)
{
    int n=s.size();
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<n)
    {
        if(s[len]==s[i]) {len++;lps[i]=len;i++;}
        else
        {
            if(len==0){lps[i]==0;i++;}
            else len=lps[len-1];
        }
    }
    for(int i=0;i<n;i++) cout<<lps[i]<<" ";
    cout<<endl;
}
void KMP(string& txt, string& pat)
{
    int n=txt.size();
    int m=pat.size();
    vi lps(n,0);
    fillLPS(pat,lps);
    int i=0,j=0;
    while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;j++;
        }
        if(j==m) {cout<<i-j<<" ";j=lps[j-1];}
        if(txt[i]!=pat[j] && i<n)
        {
            if(j==0) i++;
            else
            j=lps[j-1];
        }
    }

}

int main()
{
    string txt,pat;
    cin>>txt>>pat;
    KMP(txt,pat);
    
    return 0;
}