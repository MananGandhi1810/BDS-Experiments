// Linked List
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;

void add(int val);
void remove();
void traverse();

int main()
{
    int choice, val;
    bool running = true;
    while (running)
    {
        cout << "1. Add" << endl
             << "2. Remove" << endl
             << "3. Traverse" << endl
             << "0. Exit" << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            add(val);
            break;

        case 2:
            remove();
            break;

        case 3:
            traverse();
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

void add(int val)
{
    if (head == NULL)
    {
        head = new Node();
        head->val = val;
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    Node *temp = new Node();
    temp->val = val;
    current->next = temp;
    cout << val << " added to list" << endl
         << endl;
}

void remove()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl
             << endl;
    }
    if (head->next == NULL)
    {
        head = NULL;
    }
    Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    int temp = current->val;
    current->next = current->next->next;
    cout << "Item removed: " << temp << endl
         << endl;
}

void traverse()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl
             << endl;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl
         << endl;
}