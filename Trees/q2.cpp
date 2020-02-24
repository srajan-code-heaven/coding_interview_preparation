//Find Minimum Depth of a Binary Tree

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node* left;
    Node* right;
    int data;
};

struct qitem
{
    Node* node;
    int depth;
};
int minDepth(Node *root)
{
    if (root == NULL)
        return 0;
    queue<qitem> q;
    qitem qi={root,1};
    q.push(qi);
    while(!q.empty())
    {
        qi=q.front();
       Node *node = qi.node;
       int depth = qi.depth;
        q.pop();
        if(node->left==NULL && node->right==NULL)
        {
            return depth;
        }
        if(node->left!=NULL)
        {
            qi.node=node->left;
            qi.depth=depth+1;
            q.push(qi);
        }
        if(node->right!=NULL)
        {
            qi.node=node->right;
            qi.depth=depth+1;
            q.push(qi);
        }
    }
}

Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << minDepth(root);
    return 0;
}
