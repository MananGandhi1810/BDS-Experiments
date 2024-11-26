// Linear Queue
#include <iostream>
using namespace std;

struct Element
{
    int data;
};

const int n = 10;
Element queue[n];
int rear = -1;
int front = -1;

void enqueue(int);
void dequeue();
void traverse();

int main()
{
    for (int i = 0; i < 12; i++)
    {
        cout << "Queueing: " << i << endl;
        enqueue(i);
    }
    traverse();
    for (int i = 0; i < 12; i++)
    {
        dequeue();
    }
    return 0;
}

void enqueue(int data)
{
    if (rear >= n - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    queue[++rear].data = data;
    if (front == -1)
    {
        front = 0;
    }
}

void dequeue()
{
    if (front == -1 || front == rear + 1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Removed: " << queue[front++].data << endl;
}

void traverse()
{
    if (front == -1 || front == rear + 1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i].data << " ";
    }
    cout << endl;
}