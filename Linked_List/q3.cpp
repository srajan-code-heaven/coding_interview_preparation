//Reverse a Linked List in groups of given size | Set 1


#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* push(Node *head,int data)
{
    Node* new_node=new Node;
    new_node->data=data;
    new_node->next=head;
    head=new_node;
    return head;
}

Node* reverse(Node *head,int k)
{
    Node* prev=NULL;
    Node* next_=NULL;
    Node* curr=head;
    int count=0;
    while(curr!=NULL && count!=k)
    {
        next_=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next_;
        count++;
    }
    if(curr!=NULL)
    {
        head->next=reverse(curr,k);
    }
    return prev;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
    /* Start with the empty list */
    Node* head = NULL;
    /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
    head=push(head, 9);
    head=push(head, 8);
    head=push(head, 7);
    head=push(head, 6);
    head=push(head, 5);
     head= push(head, 4);
     head= push(head, 3);
     head= push(head, 2);
     head= push(head, 1);

    cout<<"Given linked list \n";
    printList(head);
    head = reverse(head, 3);

    cout<<"\nReversed Linked list \n";
    printList(head);

    return(0);
}
