// Linked List delete from beginning
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
    current = head->next;
    cout << "Before delete: ";
    while (current != NULL)
    {
        cout << current->value << "\t";
        current = current->next;
    }
    cout << endl;
    if (head->next != NULL)
    {
        head = head->next;
    }
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
