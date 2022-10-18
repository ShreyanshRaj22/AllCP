#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node *left, *right;
    node(int x){
        key=x;
        left=right=NULL;
    }
};
int preidx=0;
node* itobt(int in[],int pre[],int is,int ie)
{
    if(is>ie) return NULL;
    node* newnode = new node(pre[preidx++]);
    int inidx;
    for(int i=is;i<=ie;i++)
    {
        if(in[i]==newnode->key)
        {
            inidx=i;break;
        }
    }    
    newnode->right=itobt(in,pre,inidx+1,ie);
    newnode->left=itobt(in,pre,is,inidx-1);
    return newnode;    
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