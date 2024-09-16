// Linked List
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

int main()
{
    int n, value, index;
    Node *head = new Node();
    cout << "Enter n: ";
    cin >> n;
    Node *current = head;
    for (int i = 0; i < n; i++)
    {
        Node *n = new Node();
        n->value = i;
        current->next = n;
        current = n;
    }
    cout << "Enter index to insert: ";
    cin >> index;
    cout << "Enter value: ";
    cin >> value;
    current = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (current->next != NULL)
        {
            cout << "Could not find index" << endl;
            current = NULL;
            continue;
        }
        current = current->next;
    }
    if (current != NULL)
    {
        Node *n = new Node();
        n->value = value;
        current->next = n;
        n->next = current->next->next;
    }
    current = head;
    while (current != NULL)
    {
        cout << current->value << "\t";
        current = current->next;
    }
    cout << endl;
    return 0;
}
