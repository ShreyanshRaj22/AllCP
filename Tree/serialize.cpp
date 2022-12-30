// convert a binary tree into a vector
// here preorder traversal is used
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
const int EMPTY=-1;
void serialise(node* head, vector<int>& arr)
{
    if(head==NULL)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(head->key);
    serialise(head->left,arr);
    serialise(head->right,arr);
}
int main()
{
    
    return 0;
}