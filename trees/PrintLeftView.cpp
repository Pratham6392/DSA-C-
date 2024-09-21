#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void printLeftView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    int count = q.size();
    for (int i = 0; i < count; i++)
    {
        Node *curr = q.front();
        q.pop();
        if (i == 0)
        {
            cout << curr->data << " ";
        }
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}