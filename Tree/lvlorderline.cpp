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
void printlvl(node *head)
{
    queue<node*> q;
    q.push(head);
    while(!q.empty())
    {
        node *temp = q.front();
        cout<<temp->key<<" ";
        q.pop();
        
        if(temp->left != NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
    }    
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    printlvl(head);
    return 0;
}