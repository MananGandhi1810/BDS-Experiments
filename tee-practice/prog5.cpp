// Circular Queue
#include <iostream>
using namespace std;

struct Element
{
    int data;
};

const int n = 10;
Element queue[n];

int front = -1, rear = -1;

void enqueue(int);
void dequeue();
void traverse();

int main()
{
    int choice = 0;
    bool running = true;
    int value;
    while (running)
    {
        cout << rear << "   " << front;
        cout << endl
             << "1. Insert" << endl
             << "2. Delete" << endl
             << "3. Display" << endl
             << "0. Exit" << endl
             << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            traverse();
            break;

        case 0:
            running = false;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}

void enqueue(int data)
{
    if ((front == 0 && rear == n - 1) || (rear == front - 1))
    {
        cout << "Overflow" << endl;
        return;
    }
    queue[++rear].data = data;
    if (rear == n)
    {
        rear = 0;
    }
    if (front == -1)
    {
        front = 0;
    }
    cout << "Queued: " << data << endl;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    cout << "Dequeued: " << queue[++front].data << endl;
    if (front == n)
    {
        front = 0;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
}

void traverse()
{
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i].data << " ";
        }
    }
    else
    {
        for (int i = front; i < n; i++)
        {
            cout << queue[i].data << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << queue[i].data << " ";
        }
    }
    cout << endl;
}