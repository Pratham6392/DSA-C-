#include <iostream>
using namespace std;


//naive approach 
//time complexity O(n*2)
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int d1 = 1 + height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1, max(d2, d3));
}

//optimised approach

int height(Node*root)
{
    if(root==NULL){
        return 0;
    }
    int d= 1+height(root->left)+height(root->right);
    res=Math.max(res,d);
    return 1+Math.max(height(root->left),height(root->right));
    
}