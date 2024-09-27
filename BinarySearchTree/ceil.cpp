#include <iostream>
using namespace std;

void ceil(Node *root, int x)
{
    Node *ceil = NULL;
    while (root != NULL)
    {
        if (root->data == x)
        {
            ceil = root;
            break;
        }
        else if (root->data > x)
        {
            ceil = root;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    if (ceil != NULL)
    {
        cout << ceil->data;
    }
    else
    {
        cout << "Ceil doesn't exist";
    }
}