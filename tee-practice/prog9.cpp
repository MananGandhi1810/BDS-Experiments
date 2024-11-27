// Queue using Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void enqueue(int data);
void dequeue();
void display();

int main()
{
    int data;
    int choice;
    bool running = true;
    while (running)
    {
        cout << "1. Enqueue" << endl
             << "2. Dequeue" << endl
             << "3. Display" << endl
             << "0. Exit" << endl
             << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            enqueue(data);
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
}

void enqueue(int data)
{
    Node *temp = new Node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
    cout << "Enqueued Value: " << data << endl;
}

void dequeue()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        cout << "Dequeued Value: " << temp->data << endl;
    }
}

void display()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
    cout << endl;
}