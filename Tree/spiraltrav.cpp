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

// void spiraltrav(node *head)
// {
//     bool reverse=false;
//     queue<node*> q;
//     stack<int> s;
//     q.push(head);
//     while(q.empty()==false)
//     {
//         int count = q.size();
//         for(int i=0;i<count;i++)
//         {
//             node *temp = q.front();
//             q.pop();
//             if(reverse) s.push(temp->key);
//             else cout<<temp->key<<" ";
//             if(temp->left != NULL) q.push(temp->left);
//             if(temp->right != NULL) q.push(temp->right);
//         }
//         if(reverse)
//         {
//             while(s.empty()==false)
//             {
//                 cout<<s.top()<<" ";s.pop();
//             }
//         }
//         reverse=!reverse;
//         cout<<"\n";
//     }

// }
void spiraltrav(node *head)
{
    stack<node*> s1,s2;
    s1.push(head);
    while(s1.empty()==false || s2.empty()==false)
    {
        while(s1.empty()==false)
        {
            node* temp=s1.top();s1.pop();
            cout<<temp->key<<" ";
            if(temp->left != NULL) s2.push(temp->left);
            if(temp->right != NULL) s2.push(temp->right);
        }
        while(s2.empty()==false)
        {
            node* temp=s2.top();s2.pop();
            cout<<temp->key<<" ";
            
            if(temp->right != NULL) s1.push(temp->right);
            if(temp->left != NULL) s1.push(temp->left);
        }
    }
}
int main()
{
    node *head = new node(10);
    head->left = new node(20);
    head->right = new node(30);
    head->left->left = new node(40);
    head->left->right = new node(50);
     spiraltrav(head);

    return 0;
}