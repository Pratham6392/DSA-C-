#include <iostream>
using namespace std;

void spiralLeleOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
        return;
    }

    queue<Node *> q;
    stack<int> s;
    q.push(root);

    bool reverse = false;
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr->data);
            }
            else
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
        if (reverse)
        {
            while (!s.empty() {
                cout << s.top() << " ";
                s.pop();
            })
        }
        reverse = !reverse;
    }
}


//optimised approach
void spiralLevelOrder(Node*root){
    if(root=NULL){
        return;
    }
}