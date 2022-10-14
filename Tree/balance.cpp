#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int x)
    {
        key=x;
        left=right=NULL;
    }
};
int isB(node *root)
{
    if(root == NULL) return 0;
    int lh = isB(root->left);
    if(lh ==-1) return -1;
    int rh=isB(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;
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
    if(isB(head)==-1) cout<<"NO\n";
    else cout<<"YES\n";

    return 0;
}