/*
Call Center Management System
Scenario: A call center receives calls from customers, and each call is placed in a waiting queue if all agents are busy. The system has a limited number of slots in the queue to hold these calls. When an agent becomes available, the next call in line is connected. If the queue is full and a new call arrives, the system can either reject the call or replace the oldest one.
Problem:
* The call queue has a fixed size due to system limitations.
* Calls must be handled in the order they arrive (FIFO).
* The system must efficiently manage the fixed number of slots in the queue.
*/
#include <iostream>
using namespace std;

const int n = 10;
int front = -1, rear = -1;
struct QueueElement
{
    int value;
};
QueueElement queue[n];
void enqueue(int);
void dequeue();
void display();

int main()
{
    int choice = 0;
    bool running = true;
    int value;
    while (running)
    {
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
            display();
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

void enqueue(int value)
{
    if ((front == 0 && rear == n - 1) || (rear == (front - 1) % (n - 1)))
    {
        cout << "Queue is full. Replace the oldest call? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n')
        {
            return;
        }
        front = (front + 1) % n;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1 && front != 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear].value = value;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Removed call with value: " << queue[front].value << endl;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Calls in queue: ";
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i].value << " ";
        }
    }
    else
    {
        for (int i = front; i < n; i++)
        {
            cout << queue[i].value << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << queue[i].value << " ";
        }
    }
    cout << endl;
}
