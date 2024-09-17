#include<iostream>
using namespace std;



void PrintmMiddle(Node*head){
    int count=0;
    Node*curr;
    for(curr=head;curr!=NULL;curr=curr->next){
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++){
        curr=curr->next;
    }
    cout<<curr->data;
}
//efficient approach
\
void PrintMiddle(Node*head){
    if(head==NULL){
        return;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}