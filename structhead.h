#ifndef STRUCTHEAD
#define STRUCTHEAD
#include<bits/stdc++.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

node* insert(node *root);
void preorder(node *root);
void inorder(node *root);
void postorder(node *root);
void bfs(node *root);
int minm(node *root);
int maxm(node *root);
//node* search(node *root,int val);
node* deletenode(node *root,int val);
void verticalordr(node *root);
void topview(node *root);
void bottomview(node *root);
void left_view(node *root);
void right_view(node *root);
void spiral(node *root);
int sumpredecessor(node *root,int val);
node* search(node *root,int val);

#endif
