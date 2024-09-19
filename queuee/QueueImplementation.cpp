#include <iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *queue;
    Queue(int c)
    {
        front = 0;
        rear = -1;
        size = c;
        queue = new int[size];
    }
}

void
enqueue(int data)
{
    if (rear == size - 1)
    {
        cout << "Queue is full";
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}
void dequeue()
{
    if (front > rear)
    {
        cout << "Queue is empty";
    }
    for (int i = 0; i < rear; i++)
    {
        queue[i] = queue[i + 1];
    }
    rear--;
}
boo isEmpty()
{
    if (front > rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int getFront()
{
    if (front > rear)
    {
        cout << "Queue is empty";
    }
    else
    {
        return queue[front];
    }
}

int getRear()
{
    if (front > rear)
    {
        cout << "Queue is empty";
    }
    else
    {
        return queue[rear];
    }
}

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.isEmpty();
    cout << q.isFull();
    return 0;
}