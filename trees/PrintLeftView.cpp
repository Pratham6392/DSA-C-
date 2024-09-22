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

void printRightView(Node *root)
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
        if (i == count - 1)
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

//here the size of the queue is not fixed
//so at first the loop will run once q.size()=1
//then the loop will run twice q.size()=2
//then the loop will run four times q.size()=4
//and so on//
