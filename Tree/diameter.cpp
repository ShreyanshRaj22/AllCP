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
        left = NULL;
        right = NULL;
    }
};
int res=0;
int height(node* head)
{
    if(head == NULL) return 0;
    int lh = height(head->left);
    int rh = height(head->right);
    res=max(res,lh+rh+1);
    return 1+max(lh,rh);
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    head->left->right = new node(50);
    height(head);
    cout<<res<<"\n";
    return 0;


}