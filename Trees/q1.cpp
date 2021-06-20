//Convert a given Binary Tree to Doubly Linked List | Set 4


//node right insert at begin of linked list node left

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

//utility function to create a tree
struct Node{
    int data;
    Node* left,*right;
};

Node* newNode(int data)
{
    Node* node=new Node;
    node->data=data;
    node->left=node->right=NULL;
    return node;
}

void printList(Node* head)
{
     Node* p;
    while(head!=NULL)
    {
        cout<<head->data<<"-";
        p=head;
        head=head->right;
    }
    cout<<"\n";

     while(p!=NULL)
    {
        cout<<p->data<<"-";
        p=p->left;
    }
}

void BToDLL(Node* root,Node** head_ref)
{
    if(root==NULL)
    {
        return;
    }
    BToDLL(root->right,head_ref);
    root->right=*head_ref;
    if(*head_ref!=NULL)
    {
        (*head_ref)->left=root;
    }
    *head_ref=root;
    BToDLL(root->left,head_ref);
}

int main()
{
    Node* root=newNode(5);
    root->left=newNode(3);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
    root->right->right = newNode(8);
    root->left->left->left = newNode(0);
    root->left->left->right = newNode(2);
    root->right->right->left = newNode(7);
    root->right->right->right = newNode(9);
    Node* head=NULL;
    BToDLL(root, &head);
    printList(head);
    return 0;
}
