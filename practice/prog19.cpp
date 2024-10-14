// Circular Queue
#include <iostream>
using namespace std;

const int n = 10;

struct Element
{
    int val;
};

Element queue[n];
int front = -1, rear = -1;

void enqueue(Element);
void dequeue();
void display();

int main()
{
    int choice, val;
    Element e;
    bool running = true;
    while (running)
    {
        cout << "1. Enqueue" << endl
             << "2. Dequeue" << endl
             << "3. Display" << endl
             << "0. Exit" << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            e.val = val;
            enqueue(e);
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
            break;
        }
    }
    return 0;
}

void enqueue(Element e)
{
    if ((rear == n - 1 && front == 0) || (rear == front - 1))
    {
        cout << "Overflow" << endl
             << endl;
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = e;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "Underflow" << endl
             << endl;
        return;
    }
    cout << "Popped: " << queue[front].val << endl
         << endl;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl
             << endl;
        return;
    }
    if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i].val << " ";
        }
    }
    else
    {
        for (int i = front; i < n; i++)
        {
            cout << queue[i].val << " ";
        }
        for (int i = 0; i <= rear; i++)
        {
            cout << queue[i].val << " ";
        }
    }
    cout << endl
         << endl;
}