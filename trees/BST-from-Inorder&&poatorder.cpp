#include<iostream>
using namespace std;

//constructing a tree from two random arrays

int preIndex = 0;

void constructBST(int in[], int pre[], int is , int ie){

     Node *root= new Node(pre[preIndex++]);
    if(is > ie){
        return NULL;
    }
    if(is==ie){
        return  root;
    }

    int inIndex;
    for(int i=is;i<ie;i++){
        if(in[i]==root->data){
            inIndex=i;
            break;
        }

    }
    root->left = constructBST(in,pre,is,inIndex-1);
    root->right = constructBST(in,pre,inIndex+1,ie);
    return root;




}