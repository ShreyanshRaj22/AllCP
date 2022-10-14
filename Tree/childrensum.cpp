#include<bits/stdc++.h>
using namespace std;
struct node
{
    node *left, *right;
    int data;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
bool csum(node *head)
{
    if(head == NULL) return true;
    if(head->left == NULL)
    {
        if(head->right->data == head->data)
        {
            return csum(head->right);
        }
        else return false;
    }
    else if(head->right == NULL)
    {
        if(head->left->data == head->data)
        {
            return csum(head->left);
        }
        else return false;
    }
    else
    {
        if(head->left->data+head->right->data == head->data)
        {
            return (csum(head->right) && csum(head->left));
        }
        else return false;
    }
    return false;
    
}
void create(node *head)
{
    int x;
    cout<<"Enter left child of "<<head->data<<": ";
    cin>>x;
    if(x!=-1)
    {
        node *nn = new node(x);
        head->left = nn;
        create(head->left);
    }
    cout<<"Enter right child of "<<head->data<<": ";
    cin>>x;
    if(x!=-1)
    {
        node *nn= new node(x);
        head->right = nn;
        create(head->right);
    }

}
int main()
{
    int x;
    cout<<"Enter root: ";
    cin>>x;
    node *head = new node(x);
    create(head);
    if(csum) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}