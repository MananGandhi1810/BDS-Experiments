// Todo List using Linked List
#include <iostream>
#include <string>
using namespace std;

struct TodoNode
{
    int id;
    string task;
    TodoNode *next;
};

int lastTodoId = -1;
TodoNode *head = NULL;

void insert(string);
void completed(int);
void display();

int main()
{
    int choice;
    string task;
    int id;
    bool running = true;
    while (running)
    {
        cout << endl
             << "1. New Todo" << endl
             << "2. Completed Todo" << endl
             << "3. Display All Todos" << endl
             << "0. Exit" << endl
             << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, task);
            insert(task);
            break;

        case 2:
            cout << "Enter id: ";
            cin >> id;
            completed(id);
            break;

        case 3:
            display();
            break;

        case 0:
            running = false;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

void insert(string task)
{
    TodoNode *temp = new TodoNode();
    temp->id = ++lastTodoId;
    temp->task = task;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        TodoNode *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
    cout << "Inserted todo with id: " << lastTodoId << endl;
}

void completed(int id)
{
    if (head == NULL)
    {
        cout << "Todo list is empty" << endl;
    }
    else if (head->id == id)
    {
        TodoNode *temp = head;
        head = head->next;
        cout << "Completed task: " << temp->task << endl;
    }
    else
    {
        TodoNode *current = head;
        while (current->next != NULL && current->next->id != id)
        {
            current = current->next;
        }
        if (current->next == NULL)
        {
            cout << "This todo does not exist" << endl;
        }
        else
        {
            TodoNode *temp = current->next;
            current->next = current->next->next;
            cout << "Completed task: " << temp->task << endl;
        }
    }
}

void display()
{
    if (head == NULL)
    {
        cout << "Todo list is empty" << endl;
    }
    else
    {
        TodoNode *current = head;
        while (current != NULL)
        {
            cout << current->id << ". " << current->task << endl;
            current = current->next;
        }
    }
}