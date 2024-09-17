#include<iostream>
using namespace std;


Node *inserAtBeginning(Node*head,int x){
    Node* temp = new Node(x);
    temp->next=head;
    return temp
}

Node  *insertAtEnd(Node*head, int x){
    Node * temp = new Node(x);
    Node * curr= head;
    if(head==NULL){
        return temp;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}


Node insertAtpos(Node*head, int pos, int data){
    

}
