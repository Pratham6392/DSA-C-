#include<iostream>
using namespace std;

Node *Search(Node*head, int x){



    Node*curr=head; 
    int pos=1;

    for(int i=0;curr!=NULL;i++){
        if(curr->data==x){
            return pos;
        }
        else{
          pos++;
          curr=curr->next;
        }
        
    }
    return -1;

}