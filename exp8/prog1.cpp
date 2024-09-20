/*
Write a C/C++ program to implement the following operations on a singly linked list
i) Insert the node at a particular position
ii)	Modify the info of a node (position to be specified by the user)
iii) Delete a node (position to be specified by the user- End, Beginning, position)
iv)	Traverse the list
*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertNode(int data, int position)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < position - 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void modifyNode(int data, int position)
{
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    temp->data = data;
}

void deleteNode(int position)
{
    Node *temp = head;
    if (position == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; i < position - 2; i++)
    {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}

void traverseList()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice;
    do
    {
        cout << "1. Insert Node\n2. Modify Node\n3. Delete Node\n4. Traverse List\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data, position;
            cout << "Enter data and position: ";
            cin >> data >> position;
            insertNode(data, position);
            break;
        case 2:
            cout << "Enter data and position: ";
            cin >> data >> position;
            modifyNode(data, position);
            break;
        case 3:
            cout << "Enter position: ";
            cin >> position;
            deleteNode(position);
            break;
        case 4:
            traverseList();
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 5);
    return 0;
}