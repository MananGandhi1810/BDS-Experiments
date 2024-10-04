// Queue using linked list
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;

void enqueue(int);
int dequeue();
void display();

int main()
{
    int choice, val;
    while (1)
    {
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> val;
            enqueue(val);
            break;
        case 2:
            val = dequeue();
            if (val != -1)
                cout << "Dequeued value: " << val << endl;
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

void enqueue(int val)
{
    Node *newNode = new Node;
    newNode->val = val;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int dequeue()
{
    if (head == NULL)
    {
        cout << "Queue is empty" << endl;
        return -1;
    }
    Node *temp = head;
    head = head->next;
    int val = temp->val;
    delete temp;
    return val;
}

void display()
{
    if (head == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *temp = head;
    cout << "Queue: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}