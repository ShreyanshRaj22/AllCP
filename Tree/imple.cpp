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
void inorder(node *head)
{
    if(head == NULL) return;
    inorder(head->left);
    cout<<head->key<<" ";
    inorder(head->right);
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    inorder(head);
}