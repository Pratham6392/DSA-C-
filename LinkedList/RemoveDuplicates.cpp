#include<iostream>
using namespace std;


void RemoveDulicates(Node*head){
    Node*curr=head;
    while(curr!=NULL && cur->next!NULL){
        if(curr->data==curr->next>data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }else{
            curr=curr->next;
        }
    }

}

//Docs
//Here we are writing loop till curr!=NULL && curr->next!=NULL because we want to reach the second last node of the linked list.
//So than we can deallocate the memory also , since we are deleting the last node of the linked list.
//In this example curr node is not changes because we are deleting the next node of the curr node.