#include <iostream>
using namespace std;

bool path(Node *root, vector<Node *> &p, int n)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->key = n)
    {
        return true;
    }
    if (path(root->left, p, n) || path(root->right, p, n))
    {
        return true;
    }
    p.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2)
{
    
  

}