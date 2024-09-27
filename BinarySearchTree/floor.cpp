#include<iostream>
using namespace std;

//floor of a binary search tree
void floor(Node*root, int x){
    Node*floor=NULL;
    while(root!=NULL){
        if(root->data==x){
            floor=root;
            break;
        }
        else if(root->data>x){
            root=root->left;
        }
        else{
            floor=root;
            root=root->right;
        }
    }
    if(floor!=NULL){
        cout<<floor->data;
    }
    else{
        cout<<"Floor doesn't exist";
    }

}