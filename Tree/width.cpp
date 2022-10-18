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

int width(node *root)
{
    queue<node*> q;
    if(root == NULL) return 0;
    q.push(root);
    int res=0;
    while(q.empty()==false)
    {
        int count = q.size();
        res=max(res,count);
        for(int i=0;i<count;i++)
        {
            node *curr=q.front();
            q.pop();
            if(curr->left !=NULL) q.push(curr->left);
            if(curr->right !=NULL) q.push(curr->right);
        }
    }
    return res;
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
    int y=width(head);
    cout<<y<<"\n";
    

    return 0;
}