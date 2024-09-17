#include<iostream>
using namespace std;

Node *reverseList(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    Node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

//Reverse a linked list in groups of size k
//Given a linked list, write a function to reverse every k nodes (where k is an input to the function).
//Example:
//Inputs: 1->2->3->4->5->6->7->8->NULL and k = 3
//Output: 3->2->1->6->5->4->8->7->NULL.



  Node *reverseGroup(Node*head, int k){



  }