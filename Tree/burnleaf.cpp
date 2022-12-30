// burn a binary tree from the leaf node and count the number of seconds it takes to burn the whole tree
// or find the distance of given node from the farthest node
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
int burnTime(node *head,int leaf, int& dist)
{
    if(head == NULL) return 0;
    if(head->key == leaf)
    {
        dist=0;
        return 1;
    }
    int ldist=-1,rdist=-1;
    int lh=burnTime(head->left,leaf,ldist);
    int rh=burnTime(head->right,leaf,rdist);
    if(ldist!=-1)
    {
        dist=ldist+1;
        res=max(res,dist+rh);
    }
    else
    {
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    head->left->right = new node(50);
    head->right->left = new node(60);
    head->right->right = new node(70);
    head->right->right->right = new node(80);
    int dist=-1;
    burnTime(head,50,dist);
    cout<<res<<"\n";
    return 0;
}