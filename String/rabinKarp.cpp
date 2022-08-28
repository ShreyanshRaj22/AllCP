#include<bits/stdc++.h>
using namespace std;
int rabinKarp(string& s,string& p)
{
    int n=s.size();
    int m=p.size();
    int hs=0,hp=0;
    int h=1;
    for(int i=1;i<=m-1;i++)
    {
        h=h*2;
    }
    for(int i=0;i<m;i++)
    {
        hp=hp*2+p[i];
        hs=hs*2+s[i];
    }
    for(int i=0;i<=n-m;i++)
    {
        if(hp==hs)
        {
            bool flag=true;
            int k=i;
            for (int j = 0; j < m; j++)
            {
                if(p[j]!=s[k])
                {
                    flag=false;
                    break;
                }
                k++;
            }
            
            if(flag) cout<<i<<" ";
        }
        hs=(hs-s[i]*h)*2+s[i+m];

    }
    cout<<endl;
    

}
int main()
{
    string s,p;
    cin>>s>>p;
    rabinKarp(s,p);
    return 0;

}