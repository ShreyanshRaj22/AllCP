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
node* lca(node* head, int n1, int n2)
{
    if(head == NULL) return NULL;
    if(head->key == n1 || head->key == n2) return head;
    node* lca1 = lca(head->left,n1,n2);
    node* lca2 = lca(head->right,n1,n2);
    if(lca1 != NULL && lca2 != NULL) return head;    
    if(lca1 != NULL) return lca1;
    if(lca2 != NULL) return lca2;
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
    node *temp = lca(head,60,80);
    cout<<temp->key<<"\n";
    return 0;


}