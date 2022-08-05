#include<bits/stdc++.h>
using namespace std;
double med(int a1[],int a2[],int n1,int n2)
{
    int begin=0,end=n1;
    while (begin<=end)
    {
        int i1=(begin+end)/2;
        int i2=(n1+n2+1)/2-i1;
        int max1=(i1==0)?INT_MIN:a1[i1-1];
        int max2=(i2==0)?INT_MIN:a2[i2-1];
        int min1=(i1==n1)?INT_MAX:a1[i1];
        int min2=(i2==n2)?INT_MAX:a2[i2];
        if(max1<min2 && max2<min1)
        {
            if((n1+n2)%2==0)
            {
                return (min(min1,min2)+max(max1,max2))*1.0/2;
            }
            else{
                return (double)(max(max1,max2));
            }
        }else if(max1>min2) end=i1-1;
        else begin=i1+1;
    }
    
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++) cin>>a1[i];
    for(int i=0;i<n2;i++) cin>>a2[i];
    if(n1<n2) cout<<med(a1,a2,n1,n2)<<"\n";
    else cout<<med(a2,a1,n2,n1)<<"\n";
    return 0;
}