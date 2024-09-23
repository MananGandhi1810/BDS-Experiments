// Doubly Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void addNode(int);
void deleteNode();
void traverse();
void traverseReverse();

int main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);
    traverse();
    deleteNode();
    deleteNode();
    traverse();
    traverseReverse();
    return 0;
}

void addNode(int data)
{
    Node *current = head;
    if (head == NULL)
    {
        head = new Node();
        head->data = data;
        tail = head;
        return;
    }
    while (current->next != NULL)
    {
        current = current->next;
    }
    Node *temp = new Node();
    temp->prev = current;
    temp->data = data;
    current->next = temp;
    tail = temp;
}

void deleteNode()
{
    tail = tail->prev;
    tail->next = NULL;
}

void traverse()
{
    Node *current = head;
    if (current == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void traverseReverse()
{
    Node *current = tail;
    if (current == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}