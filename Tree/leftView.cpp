#include<bits/stdc++.h>
using namespace std;
int maxlvl=0;
struct node
{
    int key;
    node *left;
    node *right;
    node(int x)
    {
        key=x;
        left = NULL;
        right = NULL;
    }
};

void lvltr(node *head,int l)
{
    if(head == NULL) return;
    if(maxlvl<l)
    {
        cout<<head->key<<" ";
        maxlvl=l;
    }
    lvltr(head->left,l+1);
    lvltr(head->right,l+1);
}

int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    lvltr(head,1);
    return 0;
}