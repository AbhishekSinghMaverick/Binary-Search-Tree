#include "structhead.h"
using namespace std;

void preorder(node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
   // cout<<endl;
}


void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
   // cout<<endl;
}

void postorder(node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void bfs(node *root)
{
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty())
    {
        node *tmp=qu.front();
        qu.pop();
        cout<<tmp->data<<" ";
        if(tmp->left!=NULL)
        qu.push(tmp->left);
        if(tmp->right!=NULL)
        qu.push(tmp->right);

    }
}

void spiral(node *root)
{
    stack<int> st;
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    st.push(root->data);
    int count=1;
    while(qu.front())
    {
        if(count%2!=0)
        {
            while(!st.empty())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<st.top()<<" ";
                st.pop();
                if(tmp->left)
                qu.push(tmp->left);
                if(tmp->right)
                qu.push(tmp->right);
            }
        }
        else
        {
            while(qu.front())
            {
                node *tmp=qu.front();
                qu.pop();
                cout<<tmp->data<<" ";
                if(tmp->left)
                {
                    qu.push(tmp->left);
                    st.push(tmp->left->data);
                }
                if(tmp->right)
                {
                    qu.push(tmp->right);
                    st.push(tmp->right->data);
                }
            }
        }
        qu.pop();
        qu.push(NULL);
        count++;
        
    }
    cout<<endl;
}