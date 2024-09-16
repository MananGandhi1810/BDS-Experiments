// Linked List
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node *head = new Node();

int main()
{
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    n1->value = 10;
    n2->value = 20;
    n3->value = 30;
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << "\t";
        current = current->next;
    }
    cout << endl;
    return 0;
}
