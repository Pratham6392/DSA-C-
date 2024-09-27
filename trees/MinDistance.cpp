#include <iostream>
using nakespace std;

Node *insert(Node *root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    else if (root->key < x)
    {
        root->right = insert(root->right, x);
    }
    else
    {
        root->left = insert(root->left, x);
    }
}
int distanceFromRoot(Node *root, int x)
{
    if (root->key == x)
    {
        return 0;
    }
    else if (root == NULL)
    {
        return -1;
    }
    else if (root->key > x)
    {
        int d = distanceFromRoot(root->left, x);
        if (d == -1)
        {
            return -1;
        }
        return d + 1;
    }
    else
    {
        int d = distanceFromRoot(root->right, x);
        if (d == -1)
        {
            return -1;
        }
        return d + 1;
    }
}