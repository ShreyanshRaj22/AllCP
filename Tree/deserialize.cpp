// convert a serialized vector back into binary tree
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
const int EMPTY=-1;
int index=0;
node* deserialise(vector<int>& arr)
{
    if(index == arr.size()) return NULL;
    int val = arr[index];
    index++;
    if(val == -1) return NULL;
    node *head = new node(val);
    head->left = deserialise(arr);
    head->right = deserialise(arr);
    return head;
    
}
int main()
{
    return 0;
}