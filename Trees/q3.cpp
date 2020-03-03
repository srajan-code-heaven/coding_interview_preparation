// C++ program to check if a given tree is BST.
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
};

bool isBST(Node* root,Node* min,Node* max)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL and root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL  and root->data>=max->data)
    {
        return false;
    }
    isBST(root->left,min,root) && isBST(root->right,root,max);
}

Node* newNode(int data)
{
    Node* n_node=new Node();
    n_node->data=data;
    n_node->left=n_node->right=NULL;
    return n_node;
}

int main()
{
    struct Node *root = newNode(3);
    root->left        = newNode(2);
    root->right       = newNode(5);
    root->left->left  = newNode(1);
    root->left->right = newNode(4);

  Node* min=NULL;
  Node *max=NULL;
    if (isBST(root,min,max))
        cout << "Is BST";
    else
        cout << "Not a BST";

    return 0;
}
