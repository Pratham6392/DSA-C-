//Print nodes at distance k from root

#include<iostream>
using namespace std;

void printNodesAtDistanceK(Node* root,int k){
    if(root==NULL){
        return 0;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printNodesAtDistanceK(root->left,k-1);
        printNodesAtDistanceK(root->right,k-1);
    }

}
//Time complexity
//O(n) where n is the number of nodes in the tree
