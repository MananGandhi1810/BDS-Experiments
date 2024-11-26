// Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(int);
void remove(int);
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
    remove(0);
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
    cout << "Inserted: " << value << endl;
}

void remove(int index)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    if (index == 0)
    {
        head = head->next;
        return;
    }
    Node *current = head;
    for (int i = 0; i < index - 1 && current->next != NULL; i++)
    {
        current = current->next;
    }
    if (current->next == NULL)
    {
        cout << "Index not found" << endl;
        return;
    }
    Node *temp = current->next;
    current->next = current->next->next;
    cout << "Removed: " << temp->data << endl;
    delete temp;
}

void traverse()
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
    }
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}