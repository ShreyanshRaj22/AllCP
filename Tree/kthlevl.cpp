#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    }
};
void prlvl(node *head, int k)
{
    if(head == NULL) return;
    if(k==0)
    {
        cout<<head->key<<" ";
        return;
    }

    k--;
    prlvl(head->left,k);
    prlvl(head->right,k);
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    int k;
    cin>>k;
    prlvl(head,k);
    return 0;
}