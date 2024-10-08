#include <iostream>
using namespace std;

Node *deleteFirst(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *deleteLastNode(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        if (head->next == NULL)
        {
            delete head;
            return NULL;
        }
        else
        {
            Node *curr = head;
            while (curr->next->next != NULL)
            {
                curr = curr->next;
            }
            delete curr->next;
            curr->next = NULL;
            return head;
        }
    }
}

Node deleteAtposition(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (pos == 1)
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
    else
    {
        Node *curr = head;
        for (int i = 1; i <= pos - 2 && curr != NULL; i++)
        {
            curr = curr->next;
        }
        if (curr == NULL || curr->next == NULL)
        {
            return head;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
}

// Docs

// Here we are writing loop till curr->next->next!=NULL because we want to reach the second last node of the linked list.
// So than we can deallocate the memory also , since we are deleting the last node of the linked list.
// So we are writing curr->next=NULL to make the second last node as the last node of the linked list.
// In C++ we can delete the memory of the node by using delete keyword.
// Here there should be atleast 2 node in the linked list to delete the last node of the linked list.
