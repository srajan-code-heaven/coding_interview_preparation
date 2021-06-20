//Find Minimum Depth of a Binary Tree
/* Java implementation to find minimum depth
of a given Binary tree */

/* Class containing left and right child of current
node and key value*/
class Node
{
	int data;
	Node left, right;
	public Node(int item)
	{
		data = item;
		left = right = null;
	}
}
public class BinaryTree
{
	//Root of the Binary Tree
	Node root;

	int minimumDepth()
	{
		return minimumDepth(root);
	}

	/* Function to calculate the minimum depth of the tree */
	int minimumDepth(Node root)
	{
		// Corner case. Should never be hit unless the code is
		// called on root = NULL
		if (root == null)
			return 0;

		// Base case : Leaf Node. This accounts for height = 1.
		if (root.left == null && root.right == null)
			return 1;

		// If left subtree is NULL, recur for right subtree
		if (root.left == null)
			return minimumDepth(root.right) + 1;

		// If right subtree is NULL, recur for left subtree
		if (root.right == null)
			return minimumDepth(root.left) + 1;

		return Math.min(minimumDepth(root.left),
						minimumDepth(root.right)) + 1;
	}

	/* Driver program to test above functions */
	public static void main(String args[])
	{
		BinaryTree tree = new BinaryTree();
		tree.root = new Node(1);
		tree.root.left = new Node(2);
		tree.root.right = new Node(3);
		tree.root.left.left = new Node(4);
		tree.root.left.right = new Node(5);

		System.out.println("The minimum depth of "+
		"binary tree is : " + tree.minimumDepth());
	}
}





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
