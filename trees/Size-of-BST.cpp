#include <iostream>
using namespace std;

int size(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {

        return size(root->left) + size(root->right) + 1;
    }
}
