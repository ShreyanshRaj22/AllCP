// count number of nodes in a complete binary tree
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

int cheight(node* head)
{
    int lh=0,rh=0;
    node *curr=head;
    while(curr != NULL)
    {
        lh++;
        curr=curr->left;
    }
    curr=head;
    while(curr != NULL)
    {
        rh++;
        curr=curr->right;
    }
    if(lh==rh)
    {
        int h=pow(2,lh)-1;
        return h;
    }
    else
    {
        return 1+cheight(head->right)+cheight(head->left);
    }

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
    cout<<cheight(head)<<"\n";
    return 0;
}