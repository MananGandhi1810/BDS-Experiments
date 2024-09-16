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
    Node *head = new Node();
    int n;
    cout << "Enter n: ";
    cin >> n;
    Node *current = head;
    for (int i = 0; i < n; i++)
    {
        Node *n = new Node();
        n->value = i;
        n->next = head;
        head = n;
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
