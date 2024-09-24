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
};

Node *getSucc(Node *root)
{
    Node *curr = roo->right;
    while (curr != NULL && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *delNode(Node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }
    else if (root->left == NULL)
    {
        Node *temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL)
    {
        Node *temp = root->left;
        delete root;
        return temp;
    }
    else if (root->key > x)
    {
        root->left = delNode(root->left, x);
    }
    else if (root->key < x)
    {
        root->right = delNode(root->right, x);
    }
    else
    {
        Node *succ = getSucc(root);
        root->key = succ->key;
        root->right = delNode(root->right, succ->key);
    }
}
