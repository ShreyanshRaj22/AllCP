#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left,*right;
    node(int x)
    {
        key=x;
        left=right=NULL;
    }
};
node* previous = NULL;
node* BToDLL(node* root)
{
    if(root == NULL) return root;
    node* head = BToDLL(root->left);
    if(previous == NULL)
    {
        head=root;
    }
    else
    {
        root->left = previous;
        previous->right=root;
    }
    previous=root;
    BToDLL(root->right);
    return head;

}
void create(node *head)
{
    int x;
    cout<<"Enter left child of "<<head->key<<": ";
    cin>>x;
    if(x!=-1)
    {
        node *nn = new node(x);
        head->left = nn;
        create(head->left);
    }
    cout<<"Enter right child of "<<head->key<<": ";
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
    

    return 0;
}
