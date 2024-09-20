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
    cout << "Enter index to delete: ";
    cin >> index;
    current = head->next;
    cout << "Before delete: ";
    while (current != NULL)
    {
        cout << current->value << "\t";
        current = current->next;
    }
    cout << endl;
    current = head;
    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }
    current->next = current->next->next;
    current = head->next;
    cout << "After delete: ";
    while (current != NULL)
    {
        cout << current->value << "\t";
        current = current->next;
    }
    cout << endl;
    return 0;
}
