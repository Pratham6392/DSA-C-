#include<iostream>
using namespace std;

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

//Time complexity 
//O(n) where n is the number of nodes in the tree
//Space complexity
//O(h) where h is the height of the tree