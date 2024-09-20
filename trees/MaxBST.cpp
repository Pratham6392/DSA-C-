#include <iostream>
using namespace std;

struct Node
{
    int key;
    int *left;
    int right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }

}

int maxBST(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(maxBST(root->right, root->left), root->key);
    }
}