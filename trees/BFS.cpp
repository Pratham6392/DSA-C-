#include <iostream>
using namespace std;

// My approach

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (max(height(root->left), height(root->right)) + 1);
    }
}

void printNodesAtDistanceK(Node *root, int k)
{

    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        printNodesAtDistanceK(root->left, k - 1);
        printNodesAtDistanceK(root->right, k - 1);
    }
}

void BFS(Node *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        printNodesAtDistanceK(root, i);
    }
}

//Time complexity
//O(n*h) where n is the number of nodes in the tree



//Optimal approach
//Time complexity: O(n) where n is the number of nodes in the tree
//Space complexity: O(n) where n is the number of nodes in the tree

void printNodes(Node*root)
{

queue<Node*> q;
q.push(root);



}