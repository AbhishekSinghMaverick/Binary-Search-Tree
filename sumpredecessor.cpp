#include "structhead.h"

node* search(node *root,int val)
{
    while(root!=NULL)
    {

        if(root->data>val)
        {
            root=root->left;
        }
        else if(root->data<val)
        {
            root=root->right;
        }
        else
        {
            if(root->data==val)
            return root;
            else
            {
                return NULL;
            }
            
        }
    } 
    return root;  
        
}

int sumpredecessor(node *root,int val)
{
    node *tmp=search(root,val);
    node *tmp1,*tmp2;
    if(!tmp)
    return -1;
    else if(tmp->left==NULL && tmp->right!=NULL)
    {
        tmp1=tmp->right;
        while(tmp1->left)
        {
            tmp1=tmp1->left;
        }
        return tmp1->data;
    }
    else if(tmp->left!=NULL && tmp->right==NULL)
    {
        tmp1=tmp->left;
        while(tmp1->right)
        {
            tmp1=tmp1->right;
        }
        return tmp1->data;
    }
    else if(tmp->left==NULL && tmp->right==NULL)
    {
        return 0;
    }
    else
    {
        tmp1=tmp->left,tmp2=tmp->right;
        while(tmp1->right)
        {
            tmp1=tmp1->right;
        }
        while(tmp2->left)
        {
            tmp2=tmp2->left;
        }

        return tmp1->data+tmp2->data;

    }
}