// Queue using linked list
#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void enqueue(int);
void dequeue();
void traverse();

int main()
{
    enqueue(100);
    enqueue(200);
    enqueue(300);
    enqueue(400);
    traverse();
    dequeue();
    dequeue();
    traverse();
    return 0;
}

void enqueue(int data)
{
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = new Node();
    current->next->data = data;
}

void dequeue()
{
    if (head == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Dequeued value: " << head->data << endl;
    head = head->next;
}

void traverse()
{
    if (head == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}