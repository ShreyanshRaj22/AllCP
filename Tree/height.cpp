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
int height(node *head)
{
    if(head == NULL) return 0;
    int h1=height(head->left);
    int h2 = height(head->right);
    return max(h1,h2)+1;
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    cout<<height(head)<<"\n";
    return 0;


}