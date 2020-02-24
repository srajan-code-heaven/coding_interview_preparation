//Floyd’s Cycle-Finding Algorithm
//Detect loop in a linked list

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
};

void push(Node **head_ref,int data)
{
    Node* node=new Node;
    node->data=data;
    node->next=*head_ref;
    *head_ref=node;
}

bool detectLoop(Node *head_ref)
{
    Node* fast_ptr=head_ref;
    Node* slow_ptr=head_ref;
    while(fast_ptr!= NULL && slow_ptr!=NULL && fast_ptr->next!=NULL)
    {
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;
        if(fast_ptr==slow_ptr)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
   // head->next->next->next->next = head;

    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;
}
