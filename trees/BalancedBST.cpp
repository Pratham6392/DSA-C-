#include <iostream>
using namespace std;

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return Math.max(height(root->left), height(root->right)) + 1;
    }
}
bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    return false;
}