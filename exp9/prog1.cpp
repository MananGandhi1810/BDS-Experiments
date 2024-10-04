// Stack using linked list
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;

void push(int);
int pop();
void display();

int main()
{
    int choice, val;
    while (1)
    {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            push(val);
            break;
        case 2:
            val = pop();
            if (val != -1)
                cout << "Popped value: " << val << endl;
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

void push(int val)
{
    Node *newNode = new Node;
    newNode->val = val;
    newNode->next = head;
    head = newNode;
}

int pop()
{
    if (head == NULL)
    {
        cout << "Stack is empty" << endl;
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
        cout << "Stack is empty" << endl;
        return;
    }
    Node *temp = head;
    cout << "Stack: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}