// Stack using Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void push(int data);
void pop();
void display();

int main()
{
    int data;
    int choice;
    bool running = true;
    while (running)
    {
        cout << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "0. Exit" << endl
             << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            push(data);
            break;

        case 2:
            pop();
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

void push(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
    cout << "Pushed Value: " << data << endl;
}

void pop()
{
    if (head == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        cout << "Popped Value: " << temp->data << endl;
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