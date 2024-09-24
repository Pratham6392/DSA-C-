#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
} bool Search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == x)
    {
        return true;
    }
    else if (root->key < x)
    {
        return Search(root->right, x);
    }
    else
    {
        return Search(root->left, x);
    }
}