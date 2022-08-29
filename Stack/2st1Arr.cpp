#include<bits/stdc++.h>
using namespace std;
struct tStacks
{
    int *arr,cap,top1,top2;
    tStacks(int x)
    {
        cap=x;
        top1=-1;
        top2=cap;
        arr = new int(x);
        
    }
    void push1(int data)
    {
        
        if(top1<top2-1) {top1++;arr[top1]=data;}

    }
    void push2(int data)
    {
        top2--;
        if(top2>top1+1)
        {
            top2--;
            arr[top2]=data;
        }
    }
    int pop1()
    {
        if(top1>=0)
        {
            int x=arr[top1--];
            return x;
        }
        else exit(1);
    }
    int pop2()
    {
        if(top2<cap)
        {
            int x=arr[top2--];
            return x;
        }
        else exit(1);
    }
};