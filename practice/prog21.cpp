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
void pop();
void display();

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
    return 0;
}

void push(int val)
{
    Node *newNode = new Node();
    newNode->val = val;
    newNode->next = head;
    head = newNode;
}

void pop()
{
    if (head == NULL)
    {
        cout << "Empty" << endl;
    }
    Node *temp = head;
    head = head->next;
    cout << "Popped: " << temp->val << endl;
    delete temp;
}

void display()
{
    if (head == NULL)
    {
        cout << "Stack empty" << endl;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}