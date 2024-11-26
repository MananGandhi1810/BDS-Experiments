// Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(int);
void traverse();

Node *head = NULL;

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    traverse();
}

void insert(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

void traverse()
{
    if (head == NULL)
    {
        cout << "Empty List";
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}