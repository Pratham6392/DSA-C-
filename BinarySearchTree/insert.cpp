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

void insert(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
        {
            curr = curr->left;
        }
        else if (curr->key < x)
        {
            curr = curr->right;
        }
        else
        {
            return;
        }
    }
    if (parent == NULL)
    {
        root = temp;
    }
    else if (parent->key > x)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }
}